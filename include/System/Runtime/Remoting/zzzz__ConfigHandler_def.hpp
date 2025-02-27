#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ConfigHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Xml/zzzz__SmallXmlParser_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfigHandler)
namespace Mono::Xml {
class SmallXmlParser_IAttrList;
}
namespace Mono::Xml {
class SmallXmlParser;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Stack;
}
namespace System::Runtime::Remoting {
class ChannelData;
}
namespace System::Runtime::Remoting {
class ProviderData;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ConfigHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ConfigHandler);
// Dependencies Mono.Xml.SmallXmlParser::IContentHandler, System.Object
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: System.Runtime.Remoting.ConfigHandler
class CORDL_TYPE ConfigHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field appName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_appName, put = __cordl_internal_set_appName)) ::StringW appName;

  /// @brief Field channelInstances, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_channelInstances, put = __cordl_internal_set_channelInstances)) ::System::Collections::ArrayList* channelInstances;

  /// @brief Field currentChannel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentChannel, put = __cordl_internal_set_currentChannel)) ::System::Runtime::Remoting::ChannelData* currentChannel;

  /// @brief Field currentClientUrl, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_currentClientUrl, put = __cordl_internal_set_currentClientUrl)) ::StringW currentClientUrl;

  /// @brief Field currentProviderData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_currentProviderData, put = __cordl_internal_set_currentProviderData)) ::System::Collections::Stack* currentProviderData;

  /// @brief Field currentXmlPath, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_currentXmlPath, put = __cordl_internal_set_currentXmlPath)) ::StringW currentXmlPath;

  /// @brief Field onlyDelayedChannels, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_onlyDelayedChannels, put = __cordl_internal_set_onlyDelayedChannels)) bool onlyDelayedChannels;

  /// @brief Field typeEntries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_typeEntries, put = __cordl_internal_set_typeEntries)) ::System::Collections::ArrayList* typeEntries;

  /// @brief Convert operator to "::Mono::Xml::SmallXmlParser_IContentHandler"
  constexpr operator ::Mono::Xml::SmallXmlParser_IContentHandler*() noexcept;

  /// @brief Method CheckPath, addr 0x3cd898c, size 0xe0, virtual false, abstract: false, final false
  inline bool CheckPath(::StringW path);

  /// @brief Method ExtractAssembly, addr 0x3cdb990, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW ExtractAssembly(::ByRef<::StringW> type);

  /// @brief Method GetNotNull, addr 0x3cdb85c, size 0x134, virtual false, abstract: false, final false
  inline ::StringW GetNotNull(::Mono::Xml::SmallXmlParser_IAttrList* attrs, ::StringW name);

  static inline ::System::Runtime::Remoting::ConfigHandler* New_ctor(bool onlyDelayedChannels);

  /// @brief Method OnChars, addr 0x3cdba50, size 0x4, virtual true, abstract: false, final true
  inline void OnChars(::StringW ch);

  /// @brief Method OnEndElement, addr 0x3cdb400, size 0x80, virtual true, abstract: false, final true
  inline void OnEndElement(::StringW name);

  /// @brief Method OnEndParsing, addr 0x3cdba54, size 0xf4, virtual true, abstract: false, final true
  inline void OnEndParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method OnIgnorableWhitespace, addr 0x3cd8a74, size 0x4, virtual true, abstract: false, final true
  inline void OnIgnorableWhitespace(::StringW s);

  /// @brief Method OnProcessingInstruction, addr 0x3cd8a70, size 0x4, virtual true, abstract: false, final true
  inline void OnProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method OnStartElement, addr 0x3cd8a78, size 0x1b4, virtual true, abstract: false, final true
  inline void OnStartElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method OnStartParsing, addr 0x3cd8a6c, size 0x4, virtual true, abstract: false, final true
  inline void OnStartParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method ParseElement, addr 0x3cd8c2c, size 0xe70, virtual false, abstract: false, final false
  inline void ParseElement(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method ParseTime, addr 0x3cdb480, size 0x3dc, virtual false, abstract: false, final false
  inline ::System::TimeSpan ParseTime(::StringW s);

  /// @brief Method ReadChannel, addr 0x3cda34c, size 0x3bc, virtual false, abstract: false, final false
  inline void ReadChannel(::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isTemplate);

  /// @brief Method ReadClientActivated, addr 0x3cdadd8, size 0x140, virtual false, abstract: false, final false
  inline void ReadClientActivated(::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method ReadClientWellKnown, addr 0x3cdab04, size 0xf0, virtual false, abstract: false, final false
  inline void ReadClientWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method ReadCustomProviderData, addr 0x3cd9a9c, size 0x360, virtual false, abstract: false, final false
  inline void ReadCustomProviderData(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method ReadInteropXml, addr 0x3cdafdc, size 0x1a0, virtual false, abstract: false, final false
  inline void ReadInteropXml(::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isElement);

  /// @brief Method ReadLifetine, addr 0x3cd9dfc, size 0x550, virtual false, abstract: false, final false
  inline void ReadLifetine(::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method ReadPreload, addr 0x3cdb17c, size 0x284, virtual false, abstract: false, final false
  inline void ReadPreload(::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method ReadProvider, addr 0x3cda708, size 0x3fc, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::ProviderData* ReadProvider(::StringW name, ::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isTemplate);

  /// @brief Method ReadServiceActivated, addr 0x3cdaf18, size 0xc4, virtual false, abstract: false, final false
  inline void ReadServiceActivated(::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method ReadServiceWellKnown, addr 0x3cdabf4, size 0x1e4, virtual false, abstract: false, final false
  inline void ReadServiceWellKnown(::Mono::Xml::SmallXmlParser_IAttrList* attrs);

  /// @brief Method ValidatePath, addr 0x3cd88ac, size 0xe0, virtual false, abstract: false, final false
  inline void ValidatePath(::StringW element, ::ArrayW<::StringW, ::Array<::StringW>*> paths);

  constexpr ::StringW const& __cordl_internal_get_appName() const;

  constexpr ::StringW& __cordl_internal_get_appName();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_channelInstances() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_channelInstances();

  constexpr ::System::Runtime::Remoting::ChannelData* const& __cordl_internal_get_currentChannel() const;

  constexpr ::System::Runtime::Remoting::ChannelData*& __cordl_internal_get_currentChannel();

  constexpr ::StringW const& __cordl_internal_get_currentClientUrl() const;

  constexpr ::StringW& __cordl_internal_get_currentClientUrl();

  constexpr ::System::Collections::Stack* const& __cordl_internal_get_currentProviderData() const;

  constexpr ::System::Collections::Stack*& __cordl_internal_get_currentProviderData();

  constexpr ::StringW const& __cordl_internal_get_currentXmlPath() const;

  constexpr ::StringW& __cordl_internal_get_currentXmlPath();

  constexpr bool const& __cordl_internal_get_onlyDelayedChannels() const;

  constexpr bool& __cordl_internal_get_onlyDelayedChannels();

  constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_typeEntries() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_typeEntries();

  constexpr void __cordl_internal_set_appName(::StringW value);

  constexpr void __cordl_internal_set_channelInstances(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_currentChannel(::System::Runtime::Remoting::ChannelData* value);

  constexpr void __cordl_internal_set_currentClientUrl(::StringW value);

  constexpr void __cordl_internal_set_currentProviderData(::System::Collections::Stack* value);

  constexpr void __cordl_internal_set_currentXmlPath(::StringW value);

  constexpr void __cordl_internal_set_onlyDelayedChannels(bool value);

  constexpr void __cordl_internal_set_typeEntries(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x3cd64a4, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(bool onlyDelayedChannels);

  /// @brief Convert to "::Mono::Xml::SmallXmlParser_IContentHandler"
  constexpr ::Mono::Xml::SmallXmlParser_IContentHandler* i___Mono__Xml__SmallXmlParser_IContentHandler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigHandler(ConfigHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigHandler(ConfigHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3064 };

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
static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___typeEntries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___channelInstances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___currentChannel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___currentProviderData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___currentClientUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___appName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___currentXmlPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___onlyDelayedChannels) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ConfigHandler, 0x50>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ConfigHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ConfigHandler*, "System.Runtime.Remoting", "ConfigHandler");
