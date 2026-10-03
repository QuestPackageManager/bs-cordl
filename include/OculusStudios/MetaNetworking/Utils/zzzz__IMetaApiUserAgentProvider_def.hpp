#pragma once
// IWYU pragma private; include "OculusStudios/MetaNetworking/Utils/IMetaApiUserAgentProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IMetaApiUserAgentProvider)
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
class IMetaApiUserAgentProvider;
}
// Write type traits
MARK_REF_T(::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*);
DEFINE_IL2CPP_CLASS(::OculusStudios::MetaNetworking::Utils::IMetaApiUserAgentProvider*, "OculusStudios.MetaNetworking.Utils", "IMetaApiUserAgentProvider");
// [NullableContext(1)]
// Dependencies
namespace OculusStudios::MetaNetworking::Utils {
// Is value type: false
// CS Name: OculusStudios.MetaNetworking.Utils.IMetaApiUserAgentProvider
class CORDL_TYPE IMetaApiUserAgentProvider {
public:
  // Declarations
  __declspec(property(get = get_userAgent)) ::StringW userAgent;

  /// @brief Method SetHeader, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetHeader(::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* headers);

  /// @brief Method SetHeader, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetHeader(::System::Net::Http::Headers::HttpRequestHeaders* headers);

  /// [CompilerGenerated]
  /// @brief Method add_userAgentDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void add_userAgentDidChangeEvent(::System::Action* value);

  /// @brief Method get_userAgent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_userAgent();

  /// [CompilerGenerated]
  /// @brief Method remove_userAgentDidChangeEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void remove_userAgentDidChangeEvent(::System::Action* value);

  // Ctor Parameters [CppParam { name: "", ty: "IMetaApiUserAgentProvider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMetaApiUserAgentProvider(IMetaApiUserAgentProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24250 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::MetaNetworking::Utils
