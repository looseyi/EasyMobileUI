Pod::Spec.new do |s|
  s.name         = 'EasyMobileUI'
  s.version      = '0.1.3'
  s.summary      = '简化安装环信iOS'
  s.description  = <<-DESC
    支持Carthage, 更新包依赖.

    - update MWPhotoBrowser
    - update SDWebImage Version
                   DESC
  s.homepage     = 'https://github.com/looseyi/EasyMobileUI'
  s.license      = 'MIT'
  s.author       = { 'Edmond' => 'chun574271939@gmail.com' }
  s.platform     = :ios, '8.0'
  s.ios.deployment_target = '8.0'
  s.source       = { :git => 'https://github.com/looseyi/EasyMobileUI.git', :tag => '#{s.version}' }
  s.source_files  = 'Source', 'Source/**/*.{swift}'
  s.source_files = 'EasyMobileUI/**/*.{h,m}'
  s.resource_bundles = {
    'EasyMobileUI' => ['EaseUIResource.bundle/*.png']
  }
  s.exclude_files = 'Classes/Exclude'
  s.dependency 'MWPhotoBrowser'
  s.dependency 'SDWebImage'
end
