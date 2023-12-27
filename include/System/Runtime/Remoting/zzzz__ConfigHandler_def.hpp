#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfigHandler)
namespace System::Runtime::Remoting {
class ChannelData;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Stack;
}
namespace Mono::Xml {
class SmallXmlParser;
}
namespace Mono::Xml {
class __SmallXmlParser__IAttrList;
}
namespace System::Runtime::Remoting {
class ProviderData;
}
namespace System {
struct TimeSpan;
}
namespace Mono::Xml {
class __SmallXmlParser__IContentHandler;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ConfigHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ConfigHandler);
// Type: System.Runtime.Remoting::ConfigHandler
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3065))
// CS Name: ::System.Runtime.Remoting::ConfigHandler*
class CORDL_TYPE ConfigHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field typeEntries, offset 0x10, size 0x8
  __declspec(property(get = __get_typeEntries, put = __set_typeEntries))::System::Collections::ArrayList* typeEntries;

  /// @brief Field channelInstances, offset 0x18, size 0x8
  __declspec(property(get = __get_channelInstances, put = __set_channelInstances))::System::Collections::ArrayList* channelInstances;

  /// @brief Field currentChannel, offset 0x20, size 0x8
  __declspec(property(get = __get_currentChannel, put = __set_currentChannel))::System::Runtime::Remoting::ChannelData* currentChannel;

  /// @brief Field currentProviderData, offset 0x28, size 0x8
  __declspec(property(get = __get_currentProviderData, put = __set_currentProviderData))::System::Collections::Stack* currentProviderData;

  /// @brief Field currentClientUrl, offset 0x30, size 0x8
  __declspec(property(get = __get_currentClientUrl, put = __set_currentClientUrl))::StringW currentClientUrl;

  /// @brief Field appName, offset 0x38, size 0x8
  __declspec(property(get = __get_appName, put = __set_appName))::StringW appName;

  /// @brief Field currentXmlPath, offset 0x40, size 0x8
  __declspec(property(get = __get_currentXmlPath, put = __set_currentXmlPath))::StringW currentXmlPath;

  /// @brief Field onlyDelayedChannels, offset 0x48, size 0x1
  __declspec(property(get = __get_onlyDelayedChannels, put = __set_onlyDelayedChannels)) bool onlyDelayedChannels;

  /// @brief Convert operator to "::Mono::Xml::__SmallXmlParser__IContentHandler"
  constexpr operator ::Mono::Xml::__SmallXmlParser__IContentHandler*() noexcept;

  constexpr ::System::Collections::ArrayList*& __get_typeEntries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_typeEntries() const;

  constexpr void __set_typeEntries(::System::Collections::ArrayList* value);

  constexpr ::System::Collections::ArrayList*& __get_channelInstances();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __get_channelInstances() const;

  constexpr void __set_channelInstances(::System::Collections::ArrayList* value);

  constexpr ::System::Runtime::Remoting::ChannelData*& __get_currentChannel();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::ChannelData*> const& __get_currentChannel() const;

  constexpr void __set_currentChannel(::System::Runtime::Remoting::ChannelData* value);

  constexpr ::System::Collections::Stack*& __get_currentProviderData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& __get_currentProviderData() const;

  constexpr void __set_currentProviderData(::System::Collections::Stack* value);

  constexpr ::StringW& __get_currentClientUrl();

  constexpr ::StringW const& __get_currentClientUrl() const;

  constexpr void __set_currentClientUrl(::StringW value);

  constexpr ::StringW& __get_appName();

  constexpr ::StringW const& __get_appName() const;

  constexpr void __set_appName(::StringW value);

  constexpr ::StringW& __get_currentXmlPath();

  constexpr ::StringW const& __get_currentXmlPath() const;

  constexpr void __set_currentXmlPath(::StringW value);

  constexpr bool& __get_onlyDelayedChannels();

  constexpr bool const& __get_onlyDelayedChannels() const;

  constexpr void __set_onlyDelayedChannels(bool value);

  static inline ::System::Runtime::Remoting::ConfigHandler* New_ctor(bool onlyDelayedChannels);

  /// @brief Method .ctor addr 0x2486c84 size 0xb8 virtual false final false
  inline void _ctor(bool onlyDelayedChannels);

  /// @brief Method ValidatePath addr 0x248a340 size 0xe4 virtual false final false
  inline void ValidatePath(::StringW element, ::ArrayW<::StringW, ::Array<::StringW>*> paths);

  /// @brief Method CheckPath addr 0x248a424 size 0xe0 virtual false final false
  inline bool CheckPath(::StringW path);

  /// @brief Method OnStartParsing addr 0x248a504 size 0x4 virtual true final true
  inline void OnStartParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method OnProcessingInstruction addr 0x248a508 size 0x4 virtual true final true
  inline void OnProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method OnIgnorableWhitespace addr 0x248a50c size 0x4 virtual true final true
  inline void OnIgnorableWhitespace(::StringW s);

  /// @brief Method OnStartElement addr 0x248a510 size 0x1b8 virtual true final true
  inline void OnStartElement(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ParseElement addr 0x248a6c8 size 0x1050 virtual false final false
  inline void ParseElement(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method OnEndElement addr 0x248d074 size 0x80 virtual true final true
  inline void OnEndElement(::StringW name);

  /// @brief Method ReadCustomProviderData addr 0x248b720 size 0x360 virtual false final false
  inline void ReadCustomProviderData(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadLifetine addr 0x248ba80 size 0x554 virtual false final false
  inline void ReadLifetine(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ParseTime addr 0x248d0f4 size 0x3d0 virtual false final false
  inline ::System::TimeSpan ParseTime(::StringW s);

  /// @brief Method ReadChannel addr 0x248bfd4 size 0x3a4 virtual false final false
  inline void ReadChannel(::Mono::Xml::__SmallXmlParser__IAttrList* attrs, bool isTemplate);

  /// @brief Method ReadProvider addr 0x248c378 size 0x3e8 virtual false final false
  inline ::System::Runtime::Remoting::ProviderData* ReadProvider(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs, bool isTemplate);

  /// @brief Method ReadClientActivated addr 0x248ca40 size 0x144 virtual false final false
  inline void ReadClientActivated(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadServiceActivated addr 0x248cb84 size 0xc8 virtual false final false
  inline void ReadServiceActivated(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadClientWellKnown addr 0x248c760 size 0xf4 virtual false final false
  inline void ReadClientWellKnown(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadServiceWellKnown addr 0x248c854 size 0x1ec virtual false final false
  inline void ReadServiceWellKnown(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadInteropXml addr 0x248cc4c size 0x1a0 virtual false final false
  inline void ReadInteropXml(::Mono::Xml::__SmallXmlParser__IAttrList* attrs, bool isElement);

  /// @brief Method ReadPreload addr 0x248cdec size 0x288 virtual false final false
  inline void ReadPreload(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method GetNotNull addr 0x248d650 size 0x138 virtual false final false
  inline ::StringW GetNotNull(::Mono::Xml::__SmallXmlParser__IAttrList* attrs, ::StringW name);

  /// @brief Method ExtractAssembly addr 0x248d788 size 0xc0 virtual false final false
  inline ::StringW ExtractAssembly(ByRef<::StringW> type);

  /// @brief Method OnChars addr 0x248d848 size 0x4 virtual true final true
  inline void OnChars(::StringW ch);

  /// @brief Method OnEndParsing addr 0x248d84c size 0xf4 virtual true final true
  inline void OnEndParsing(::Mono::Xml::SmallXmlParser* parser);

  // Ctor Parameters [CppParam { name: "", ty: "ConfigHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigHandler(ConfigHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigHandler(ConfigHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigHandler();

public:
  /// @brief Field typeEntries, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___typeEntries;

  /// @brief Field channelInstances, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___channelInstances;

  /// @brief Field currentChannel, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::ChannelData* ___currentChannel;

  /// @brief Field currentProviderData, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Stack* ___currentProviderData;

  /// @brief Field currentClientUrl, offset: 0x30, size: 0x8, def value: None
  ::StringW ___currentClientUrl;

  /// @brief Field appName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___appName;

  /// @brief Field currentXmlPath, offset: 0x40, size: 0x8, def value: None
  ::StringW ___currentXmlPath;

  /// @brief Field onlyDelayedChannels, offset: 0x48, size: 0x1, def value: None
  bool ___onlyDelayedChannels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ConfigHandler, 0x50>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ConfigHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ConfigHandler*, "System.Runtime.Remoting", "ConfigHandler");
