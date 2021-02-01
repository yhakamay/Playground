# どのイメージを基にするか
FROM centos
MAINTAINER Admin <yhakamay@student.42tokyo.jp>

# 作成したユーザの情報
# LABEL maintainer="Admin <yhakamay@student.42tokyo.jp>"

# RUN: docker buildするときに実行される
# RUN echo "now building..."
CMD echo "now running..."

# httpdをインストール
RUN yum install -y httpd
ADD ./index/html /var/www/html
EXPOSE 80
CMD ["/usr/sbin/httpd", "-D", "FOREGROUND"]
