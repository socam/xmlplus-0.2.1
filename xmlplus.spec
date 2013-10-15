# 
# Do NOT Edit the Auto-generated Part!
# Generated by: spectacle version 0.26
# 

Name:       xmlplus

# >> macros
# << macros

Summary:    xmlplus
Version:    0.2.1
Release:    1
Group:      Applications/Internet
License:    TBD
Source0:    %{name}-%{version}.tar.gz
Provides:   qtwebkit = 4.9.4

%description
XML data binding library

%prep
%setup -q -n %{name}-%{version}

# >> setup
# << setup

%build
# >> build pre
# << build pre

rm -rf  %{buildroot}/usr
mkdir -p  %{buildroot}/usr
./configure --prefix=%{buildroot}/usr
make -j8 %{?jobs:-j%jobs}

make install



# >> build post
# << build post

%install

# >> install pre
# << install pre
rm -rf %{buildroot}/usr/share/tools/resources

# >> install post
# << install post

%post
# >> post

# << post

%files
%defattr(-,root,root,-)
/usr/lib/libxsdall.*
/usr/share/tools/xsl/*
/usr/bin/*
/usr/include/*


# >> files
# << files