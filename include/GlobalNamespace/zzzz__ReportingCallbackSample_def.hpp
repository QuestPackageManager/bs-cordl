#pragma once
// IWYU pragma private; include "GlobalNamespace/ReportingCallbackSample.hpp"
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
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReportingCallbackSample
class CORDL_TYPE ReportingCallbackSample : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field DestinationsConsole, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_DestinationsConsole, put = __cordl_internal_set_DestinationsConsole)) ::UnityW<::UnityEngine::UI::Text> DestinationsConsole;

  /// @brief Field InVRConsole, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InVRConsole, put = __cordl_internal_set_InVRConsole)) ::UnityW<::UnityEngine::UI::Text> InVRConsole;

  static inline ::GlobalNamespace::ReportingCallbackSample* New_ctor();

  /// @brief Method OnReportButtonIntentNotif, addr 0x3f5a5a4, size 0xa0, virtual false, abstract: false, final false
  inline void OnReportButtonIntentNotif(::Oculus::Platform::Message_1<::StringW>* message);

  /// @brief Method Start, addr 0x3f5a404, size 0xf4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateConsole, addr 0x3f5a4f8, size 0xac, virtual false, abstract: false, final false
  inline void UpdateConsole(::StringW value);

  /// @brief Method <Start>b__2_0, addr 0x3f5a790, size 0xe4, virtual false, abstract: false, final false
  inline void _Start_b__2_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* message);

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_DestinationsConsole() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_DestinationsConsole();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_InVRConsole() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_InVRConsole();

  constexpr void __cordl_internal_set_DestinationsConsole(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_InVRConsole(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x3f5a788, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReportingCallbackSample();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReportingCallbackSample", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReportingCallbackSample(ReportingCallbackSample&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReportingCallbackSample", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReportingCallbackSample(ReportingCallbackSample const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15304 };

  /// @brief Field InVRConsole, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___InVRConsole;

  /// @brief Field DestinationsConsole, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___DestinationsConsole;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReportingCallbackSample, ___InVRConsole) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReportingCallbackSample, ___DestinationsConsole) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReportingCallbackSample, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReportingCallbackSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReportingCallbackSample*, "", "ReportingCallbackSample");
