#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ReportingCallbackSample)
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace GlobalNamespace {
class ReportingCallbackSample;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ReportingCallbackSample);
// Type: ::ReportingCallbackSample
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13219))
// CS Name: ::ReportingCallbackSample*
class CORDL_TYPE ReportingCallbackSample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field InVRConsole, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InVRConsole, put = __cordl_internal_set_InVRConsole))::UnityW<::UnityEngine::UI::Text> InVRConsole;

  /// @brief Field DestinationsConsole, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_DestinationsConsole, put = __cordl_internal_set_DestinationsConsole))::UnityW<::UnityEngine::UI::Text> DestinationsConsole;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_InVRConsole();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_InVRConsole() const;

  constexpr void __cordl_internal_set_InVRConsole(::UnityW<::UnityEngine::UI::Text> value);

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_DestinationsConsole();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_DestinationsConsole() const;

  constexpr void __cordl_internal_set_DestinationsConsole(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method Start, addr 0x26cce5c, size 0xf8, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnReportButtonIntentNotif, addr 0x26cd000, size 0xa0, virtual false, abstract: false, final false
  inline void OnReportButtonIntentNotif(::Oculus::Platform::Message_1<::StringW>* message);

  /// @brief Method UpdateConsole, addr 0x26ccf54, size 0xac, virtual false, abstract: false, final false
  inline void UpdateConsole(::StringW value);

  static inline ::GlobalNamespace::ReportingCallbackSample* New_ctor();

  /// @brief Method .ctor, addr 0x26cd1ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__2_0, addr 0x26cd1f4, size 0xe8, virtual false, abstract: false, final false
  inline void _Start_b__2_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* message);

  // Ctor Parameters [CppParam { name: "", ty: "ReportingCallbackSample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReportingCallbackSample(ReportingCallbackSample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReportingCallbackSample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReportingCallbackSample(ReportingCallbackSample const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReportingCallbackSample();

public:
  /// @brief Field InVRConsole, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___InVRConsole;

  /// @brief Field DestinationsConsole, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___DestinationsConsole;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReportingCallbackSample, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportingCallbackSample, ___InVRConsole) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportingCallbackSample, ___DestinationsConsole) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReportingCallbackSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReportingCallbackSample*, "", "ReportingCallbackSample");
