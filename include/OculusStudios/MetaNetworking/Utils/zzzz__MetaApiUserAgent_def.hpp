#pragma once
// IWYU pragma private; include "OculusStudios/MetaNetworking/Utils/MetaApiUserAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MetaApiUserAgent)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace OculusStudios::MetaNetworking::Utils {
class MetaApiUserAgent;
}
// Write type traits
MARK_REF_T(::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*);
DEFINE_IL2CPP_CLASS(::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent*, "OculusStudios.MetaNetworking.Utils", "MetaApiUserAgent");
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies System.Object
namespace OculusStudios::MetaNetworking::Utils {
// Is value type: false
// CS Name: OculusStudios.MetaNetworking.Utils.MetaApiUserAgent
class CORDL_TYPE MetaApiUserAgent : public ::System::Object {
public:
  // Declarations
  /// @brief Method AppendToken, addr 0x6348ef8, size 0x13c, virtual false, abstract: false, final false
  static inline void AppendToken(::System::Text::StringBuilder* builder, ::StringW key, /* [Nullable(2)] */ ::StringW value,
                                 /* [TupleElementNames(new[] { "original", "sanitized" })] [Nullable(new[] { 1, 1, 0, 1, 1 })] */
                                 ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>* sanitizedAgentParts);

  /// @brief Method Build, addr 0x6348c64, size 0x294, virtual false, abstract: false, final false
  static inline ::StringW Build(::StringW baseUserAgent, ::StringW appName, ::StringW appVersion, ::StringW buildVersion, ::StringW systemName, ::StringW systemVersion, ::StringW device,
                                /* [Nullable(2)] */ ::StringW locale, /* [TupleElementNames(new[] { "original", "sanitized" })] [Nullable(new[] { 1, 1, 0, 1, 1 })] */
                                ::by_ref<::System::Collections::Generic::IReadOnlyDictionary_2<::StringW, ::System::ValueTuple_2<::StringW, ::StringW>>*> sanitizedAgentParts);

  /// @brief Method IsReserved, addr 0x63491a8, size 0x24, virtual false, abstract: false, final false
  static inline bool IsReserved(char16_t character);

  /// @brief Method Sanitize, addr 0x6349034, size 0x174, virtual false, abstract: false, final false
  static inline ::StringW Sanitize(::StringW value, ::by_ref<bool> didStrip);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaApiUserAgent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgent", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaApiUserAgent(MetaApiUserAgent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaApiUserAgent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaApiUserAgent(MetaApiUserAgent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 24251 };

  /// @brief Field kHeaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kHeaderName{ u"X-APIX-User-Agent" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OculusStudios::MetaNetworking::Utils::MetaApiUserAgent) == 0x10, "Size mismatch!");

} // namespace OculusStudios::MetaNetworking::Utils
