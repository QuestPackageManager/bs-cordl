#pragma once
// IWYU pragma private; include "BeatSaber/AppInit/MetaApiUserAgentProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OculusStudios/MetaNetworking/Utils/zzzz__MetaApiUserAgentProviderBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaApiUserAgentProvider)
namespace BeatSaber::AppInit {
class MetaApiUserAgentProvider___c;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace BeatSaber::AppInit {
class MetaApiUserAgentProvider;
}
namespace BeatSaber::AppInit {
class MetaApiUserAgentProvider___c;
}
// Write type traits
MARK_REF_T(::BeatSaber::AppInit::MetaApiUserAgentProvider*);
MARK_REF_T(::BeatSaber::AppInit::MetaApiUserAgentProvider___c*);
DEFINE_IL2CPP_CLASS(::BeatSaber::AppInit::MetaApiUserAgentProvider*, "BeatSaber.AppInit", "MetaApiUserAgentProvider");
DEFINE_IL2CPP_CLASS(::BeatSaber::AppInit::MetaApiUserAgentProvider___c*, "BeatSaber.AppInit", "MetaApiUserAgentProvider/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace BeatSaber::AppInit {
// Is value type: false
// CS Name: BeatSaber.AppInit.MetaApiUserAgentProvider/<>c
class CORDL_TYPE MetaApiUserAgentProvider___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BeatSaber::AppInit::MetaApiUserAgentProvider___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0,
                      put = setStaticF___9__10_0)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>, ::StringW>* __9__10_0;

  static inline ::BeatSaber::AppInit::MetaApiUserAgentProvider___c* New_ctor();

  /// @brief Method <Rebuild>b__10_0, addr 0x3a04bac, size 0x158, virtual false, abstract: false, final false
  inline ::StringW
  _Rebuild_b__10_0(/* [TupleElementNames(new[] { "original", "sanitized" })] */ ::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>> part);

  /// @brief Method .ctor, addr 0x3a04ba8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BeatSaber::AppInit::MetaApiUserAgentProvider___c* getStaticF___9();

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>, ::StringW>* getStaticF___9__10_0();

  static inline void setStaticF___9(::BeatSaber::AppInit::MetaApiUserAgentProvider___c* value);

  static inline void setStaticF___9__10_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaApiUserAgentProvider___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentProvider___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaApiUserAgentProvider___c(MetaApiUserAgentProvider___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentProvider___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaApiUserAgentProvider___c(MetaApiUserAgentProvider___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21873 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BeatSaber::AppInit::MetaApiUserAgentProvider___c) == 0x10, "Size mismatch!");

} // namespace BeatSaber::AppInit
// Dependencies OculusStudios.MetaNetworking.Utils.MetaApiUserAgentProviderBase
namespace BeatSaber::AppInit {
// Is value type: false
// CS Name: BeatSaber.AppInit.MetaApiUserAgentProvider
class CORDL_TYPE MetaApiUserAgentProvider : public ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase {
public:
  // Declarations
  using __c = ::BeatSaber::AppInit::MetaApiUserAgentProvider___c;

  /// @brief Field _appVersion, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__appVersion, put = __cordl_internal_set__appVersion)) ::StringW _appVersion;

  /// @brief Field _baseUserAgent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__baseUserAgent, put = __cordl_internal_set__baseUserAgent)) ::StringW _baseUserAgent;

  /// @brief Field _buildVersion, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__buildVersion, put = __cordl_internal_set__buildVersion)) ::StringW _buildVersion;

  /// @brief Field _device, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__device, put = __cordl_internal_set__device)) ::StringW _device;

  /// @brief Field _locale, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__locale, put = __cordl_internal_set__locale)) ::StringW _locale;

  /// @brief Field _systemName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__systemName, put = __cordl_internal_set__systemName)) ::StringW _systemName;

  /// @brief Field _systemVersion, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__systemVersion, put = __cordl_internal_set__systemVersion)) ::StringW _systemVersion;

  static inline ::BeatSaber::AppInit::MetaApiUserAgentProvider* New_ctor();

  /// @brief Method Rebuild, addr 0x3a048b4, size 0x2a0, virtual false, abstract: false, final false
  inline void Rebuild();

  /// @brief Method SetLocale, addr 0x3a04704, size 0x3c, virtual false, abstract: false, final false
  inline void SetLocale(::StringW locale);

  constexpr ::StringW const& __cordl_internal_get__appVersion() const;

  constexpr ::StringW& __cordl_internal_get__appVersion();

  constexpr ::StringW const& __cordl_internal_get__baseUserAgent() const;

  constexpr ::StringW& __cordl_internal_get__baseUserAgent();

  constexpr ::StringW const& __cordl_internal_get__buildVersion() const;

  constexpr ::StringW& __cordl_internal_get__buildVersion();

  constexpr ::StringW const& __cordl_internal_get__device() const;

  constexpr ::StringW& __cordl_internal_get__device();

  constexpr ::StringW const& __cordl_internal_get__locale() const;

  constexpr ::StringW& __cordl_internal_get__locale();

  constexpr ::StringW const& __cordl_internal_get__systemName() const;

  constexpr ::StringW& __cordl_internal_get__systemName();

  constexpr ::StringW const& __cordl_internal_get__systemVersion() const;

  constexpr ::StringW& __cordl_internal_get__systemVersion();

  constexpr void __cordl_internal_set__appVersion(::StringW value);

  constexpr void __cordl_internal_set__baseUserAgent(::StringW value);

  constexpr void __cordl_internal_set__buildVersion(::StringW value);

  constexpr void __cordl_internal_set__device(::StringW value);

  constexpr void __cordl_internal_set__locale(::StringW value);

  constexpr void __cordl_internal_set__systemName(::StringW value);

  constexpr void __cordl_internal_set__systemVersion(::StringW value);

  /// @brief Method .ctor, addr 0x3a04744, size 0x170, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaApiUserAgentProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentProvider", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaApiUserAgentProvider(MetaApiUserAgentProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentProvider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaApiUserAgentProvider(MetaApiUserAgentProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21874 };

  /// @brief Field kAppName offset 0xffffffff size 0x8
  static constexpr ::ConstString kAppName{ u"BeatSaber" };

  /// @brief Field _baseUserAgent, offset: 0x20, size: 0x8, def value: None
  ::StringW ____baseUserAgent;

  /// @brief Field _appVersion, offset: 0x28, size: 0x8, def value: None
  ::StringW ____appVersion;

  /// @brief Field _buildVersion, offset: 0x30, size: 0x8, def value: None
  ::StringW ____buildVersion;

  /// @brief Field _systemName, offset: 0x38, size: 0x8, def value: None
  ::StringW ____systemName;

  /// @brief Field _systemVersion, offset: 0x40, size: 0x8, def value: None
  ::StringW ____systemVersion;

  /// @brief Field _device, offset: 0x48, size: 0x8, def value: None
  ::StringW ____device;

  /// @brief Field _locale, offset: 0x50, size: 0x8, def value: None
  ::StringW ____locale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BeatSaber::AppInit::MetaApiUserAgentProvider, ____baseUserAgent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AppInit::MetaApiUserAgentProvider, ____appVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AppInit::MetaApiUserAgentProvider, ____buildVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AppInit::MetaApiUserAgentProvider, ____systemName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AppInit::MetaApiUserAgentProvider, ____systemVersion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AppInit::MetaApiUserAgentProvider, ____device) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AppInit::MetaApiUserAgentProvider, ____locale) == 0x50, "Offset mismatch!");

static_assert(sizeof(::BeatSaber::AppInit::MetaApiUserAgentProvider) == 0x58, "Size mismatch!");

} // namespace BeatSaber::AppInit
