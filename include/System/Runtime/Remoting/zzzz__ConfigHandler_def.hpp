#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/ConfigHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConfigHandler)
namespace Mono::Xml {
class SmallXmlParser;
}
namespace Mono::Xml {
class __SmallXmlParser__IAttrList;
}
namespace Mono::Xml {
class __SmallXmlParser__IContentHandler;
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
// Type: System.Runtime.Remoting::ConfigHandler
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// CS Name: ::System.Runtime.Remoting::ConfigHandler*
class CORDL_TYPE ConfigHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field appName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_appName, put = __cordl_internal_set_appName))::StringW appName;

  /// @brief Field channelInstances, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_channelInstances, put = __cordl_internal_set_channelInstances))::System::Collections::ArrayList* channelInstances;

  /// @brief Field currentChannel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_currentChannel, put = __cordl_internal_set_currentChannel))::System::Runtime::Remoting::ChannelData* currentChannel;

  /// @brief Field currentClientUrl, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_currentClientUrl, put = __cordl_internal_set_currentClientUrl))::StringW currentClientUrl;

  /// @brief Field currentProviderData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_currentProviderData, put = __cordl_internal_set_currentProviderData))::System::Collections::Stack* currentProviderData;

  /// @brief Field currentXmlPath, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_currentXmlPath, put = __cordl_internal_set_currentXmlPath))::StringW currentXmlPath;

  /// @brief Field onlyDelayedChannels, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_onlyDelayedChannels, put = __cordl_internal_set_onlyDelayedChannels)) bool onlyDelayedChannels;

  /// @brief Field typeEntries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_typeEntries, put = __cordl_internal_set_typeEntries))::System::Collections::ArrayList* typeEntries;

  /// @brief Convert operator to "::Mono::Xml::__SmallXmlParser__IContentHandler"
  constexpr operator ::Mono::Xml::__SmallXmlParser__IContentHandler*() noexcept;

  /// @brief Method CheckPath, addr 0x2809ec0, size 0xe0, virtual false, abstract: false, final false
  inline bool CheckPath(::StringW path);

  /// @brief Method ExtractAssembly, addr 0x280d0e8, size 0xc0, virtual false, abstract: false, final false
  inline ::StringW ExtractAssembly(ByRef<::StringW> type);

  /// @brief Method GetNotNull, addr 0x280cfac, size 0x13c, virtual false, abstract: false, final false
  inline ::StringW GetNotNull(::Mono::Xml::__SmallXmlParser__IAttrList* attrs, ::StringW name);

  static inline ::System::Runtime::Remoting::ConfigHandler* New_ctor(bool onlyDelayedChannels);

  /// @brief Method OnChars, addr 0x280d1a8, size 0x4, virtual true, abstract: false, final true
  inline void OnChars(::StringW ch);

  /// @brief Method OnEndElement, addr 0x280cb54, size 0x80, virtual true, abstract: false, final true
  inline void OnEndElement(::StringW name);

  /// @brief Method OnEndParsing, addr 0x280d1ac, size 0x10f4, virtual true, abstract: false, final true
  inline void OnEndParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method OnIgnorableWhitespace, addr 0x2809fa8, size 0x4, virtual true, abstract: false, final true
  inline void OnIgnorableWhitespace(::StringW s);

  /// @brief Method OnProcessingInstruction, addr 0x2809fa4, size 0x4, virtual true, abstract: false, final true
  inline void OnProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method OnStartElement, addr 0x2809fac, size 0x1bc, virtual true, abstract: false, final true
  inline void OnStartElement(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method OnStartParsing, addr 0x2809fa0, size 0x4, virtual true, abstract: false, final true
  inline void OnStartParsing(::Mono::Xml::SmallXmlParser* parser);

  /// @brief Method ParseElement, addr 0x280a168, size 0x105c, virtual false, abstract: false, final false
  inline void ParseElement(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ParseTime, addr 0x280cbd4, size 0x3d8, virtual false, abstract: false, final false
  inline ::System::TimeSpan ParseTime(::StringW s);

  /// @brief Method ReadChannel, addr 0x280ba7c, size 0x3b0, virtual false, abstract: false, final false
  inline void ReadChannel(::Mono::Xml::__SmallXmlParser__IAttrList* attrs, bool isTemplate);

  /// @brief Method ReadClientActivated, addr 0x280c518, size 0x148, virtual false, abstract: false, final false
  inline void ReadClientActivated(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadClientWellKnown, addr 0x280c234, size 0xf4, virtual false, abstract: false, final false
  inline void ReadClientWellKnown(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadCustomProviderData, addr 0x280b1c4, size 0x360, virtual false, abstract: false, final false
  inline void ReadCustomProviderData(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadInteropXml, addr 0x280c728, size 0x1a0, virtual false, abstract: false, final false
  inline void ReadInteropXml(::Mono::Xml::__SmallXmlParser__IAttrList* attrs, bool isElement);

  /// @brief Method ReadLifetine, addr 0x280b524, size 0x558, virtual false, abstract: false, final false
  inline void ReadLifetine(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadPreload, addr 0x280c8c8, size 0x28c, virtual false, abstract: false, final false
  inline void ReadPreload(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadProvider, addr 0x280be2c, size 0x408, virtual false, abstract: false, final false
  inline ::System::Runtime::Remoting::ProviderData* ReadProvider(::StringW name, ::Mono::Xml::__SmallXmlParser__IAttrList* attrs, bool isTemplate);

  /// @brief Method ReadServiceActivated, addr 0x280c660, size 0xc8, virtual false, abstract: false, final false
  inline void ReadServiceActivated(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ReadServiceWellKnown, addr 0x280c328, size 0x1f0, virtual false, abstract: false, final false
  inline void ReadServiceWellKnown(::Mono::Xml::__SmallXmlParser__IAttrList* attrs);

  /// @brief Method ValidatePath, addr 0x2809dd8, size 0xe8, virtual false, abstract: false, final false
  inline void ValidatePath(::StringW element, ::ArrayW<::StringW, ::Array<::StringW>*> paths);

  constexpr ::StringW const& __cordl_internal_get_appName() const;

  constexpr ::StringW& __cordl_internal_get_appName();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_channelInstances();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_channelInstances() const;

  constexpr ::System::Runtime::Remoting::ChannelData*& __cordl_internal_get_currentChannel();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::ChannelData*> const& __cordl_internal_get_currentChannel() const;

  constexpr ::StringW const& __cordl_internal_get_currentClientUrl() const;

  constexpr ::StringW& __cordl_internal_get_currentClientUrl();

  constexpr ::System::Collections::Stack*& __cordl_internal_get_currentProviderData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Stack*> const& __cordl_internal_get_currentProviderData() const;

  constexpr ::StringW const& __cordl_internal_get_currentXmlPath() const;

  constexpr ::StringW& __cordl_internal_get_currentXmlPath();

  constexpr bool const& __cordl_internal_get_onlyDelayedChannels() const;

  constexpr bool& __cordl_internal_get_onlyDelayedChannels();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_typeEntries();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_typeEntries() const;

  constexpr void __cordl_internal_set_appName(::StringW value);

  constexpr void __cordl_internal_set_channelInstances(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_currentChannel(::System::Runtime::Remoting::ChannelData* value);

  constexpr void __cordl_internal_set_currentClientUrl(::StringW value);

  constexpr void __cordl_internal_set_currentProviderData(::System::Collections::Stack* value);

  constexpr void __cordl_internal_set_currentXmlPath(::StringW value);

  constexpr void __cordl_internal_set_onlyDelayedChannels(bool value);

  constexpr void __cordl_internal_set_typeEntries(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x2807934, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(bool onlyDelayedChannels);

  /// @brief Convert to "::Mono::Xml::__SmallXmlParser__IContentHandler"
  constexpr ::Mono::Xml::__SmallXmlParser__IContentHandler* i___Mono__Xml____SmallXmlParser__IContentHandler() noexcept;

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

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___typeEntries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___channelInstances) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___currentChannel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___currentProviderData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___currentClientUrl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___appName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___currentXmlPath) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Remoting::ConfigHandler, ___onlyDelayedChannels) == 0x48, "Offset mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ConfigHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ConfigHandler*, "System.Runtime.Remoting", "ConfigHandler");
