#pragma once
// IWYU pragma private; include "OculusStudios/MetaNetworking/Utils/MetaApiUserAgentProviderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaApiUserAgentProviderBase)
namespace OculusStudios::MetaNetworking::Utils {
class IMetaApiUserAgentProvider;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System {
class Action;
}
// Forward declare root types
namespace OculusStudios::MetaNetworking::Utils {
class MetaApiUserAgentProviderBase;
}
// Write type traits
MARK_REF_T(::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*);
DEFINE_IL2CPP_CLASS(::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase*, "OculusStudios.MetaNetworking.Utils", "MetaApiUserAgentProviderBase");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace OculusStudios::MetaNetworking::Utils {
// Is value type: false
// CS Name: OculusStudios.MetaNetworking.Utils.MetaApiUserAgentProviderBase
class CORDL_TYPE MetaApiUserAgentProviderBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _userAgent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userAgent, put = __cordl_internal_set__userAgent)) ::StringW _userAgent;

  __declspec(property(get = get_userAgent)) ::StringW userAgent;

  /// @brief Field userAgentDidChangeEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_userAgentDidChangeEvent, put = __cordl_internal_set_userAgentDidChangeEvent)) ::System::Action* userAgentDidChangeEvent;

  /// @brief Convert operator to "::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider"
  constexpr operator ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*() noexcept;

  static inline ::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase* New_ctor();

  /// @brief Method SetHeader, addr 0x6385e84, size 0xdc, virtual true, abstract: false, final true
  inline void SetHeader(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method SetHeader, addr 0x6385e08, size 0x7c, virtual true, abstract: false, final true
  inline void SetHeader(::System::Net::Http::Headers::HttpRequestHeaders* headers);

  /// @brief Method SetUserAgent, addr 0x6385f60, size 0x24, virtual false, abstract: false, final false
  inline void SetUserAgent(::StringW userAgent);

  constexpr ::StringW const& __cordl_internal_get__userAgent() const;

  constexpr ::StringW& __cordl_internal_get__userAgent();

  constexpr ::System::Action* const& __cordl_internal_get_userAgentDidChangeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_userAgentDidChangeEvent();

  constexpr void __cordl_internal_set__userAgent(::StringW value);

  constexpr void __cordl_internal_set_userAgentDidChangeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x6385f84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// [NullableContext(2)]
  /// [CompilerGenerated]
  /// @brief Method add_userAgentDidChangeEvent, addr 0x6385cb0, size 0xac, virtual true, abstract: false, final true
  inline void add_userAgentDidChangeEvent(::System::Action* value);

  /// @brief Method get_userAgent, addr 0x6385ca4, size 0xc, virtual true, abstract: false, final true
  inline ::StringW get_userAgent();

  /// @brief Convert to "::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider"
  constexpr ::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider* i___OculusStudios__MetaNetworking__Utils__IMetaApiUserAgentProvider() noexcept;

  /// [NullableContext(2)]
  /// [CompilerGenerated]
  /// @brief Method remove_userAgentDidChangeEvent, addr 0x6385d5c, size 0xac, virtual true, abstract: false, final true
  inline void remove_userAgentDidChangeEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaApiUserAgentProviderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentProviderBase", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaApiUserAgentProviderBase(MetaApiUserAgentProviderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgentProviderBase", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaApiUserAgentProviderBase(MetaApiUserAgentProviderBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24334 };

  /// @brief Field _userAgent, offset: 0x10, size: 0x8, def value: None
  ::StringW ____userAgent;

  /// [Nullable(2)]
  /// [CompilerGenerated]
  /// @brief Field userAgentDidChangeEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___userAgentDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase, ____userAgent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase, ___userAgentDidChangeEvent) == 0x18, "Offset mismatch!");

static_assert(sizeof(::OculusStudios::MetaNetworking::Utils::MetaApiUserAgentProviderBase) == 0x20, "Size mismatch!");

} // namespace OculusStudios::MetaNetworking::Utils
