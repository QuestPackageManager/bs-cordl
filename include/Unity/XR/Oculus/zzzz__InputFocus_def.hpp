#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/InputFocus.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InputFocus)
namespace System {
class Action;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class InputFocus;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::InputFocus);
// Type: Unity.XR.Oculus::InputFocus
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: ::Unity.XR.Oculus::InputFocus*
class CORDL_TYPE InputFocus : public ::System::Object {
public:
  // Declarations
  /// @brief Field InputFocusAcquired, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InputFocusAcquired, put = setStaticF_InputFocusAcquired))::System::Action* InputFocusAcquired;

  /// @brief Field InputFocusLost, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InputFocusLost, put = setStaticF_InputFocusLost))::System::Action* InputFocusLost;

  /// @brief Field hadInputFocus, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_hadInputFocus, put = setStaticF_hadInputFocus)) bool hadInputFocus;

  static inline ::Unity::XR::Oculus::InputFocus* New_ctor();

  /// @brief Method Update, addr 0x33e3cbc, size 0xa0, virtual false, abstract: false, final false
  static inline void Update();

  /// @brief Method .ctor, addr 0x33e3d5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_InputFocusAcquired, addr 0x33e39cc, size 0xb8, virtual false, abstract: false, final false
  static inline void add_InputFocusAcquired(::System::Action* value);

  /// @brief Method add_InputFocusLost, addr 0x33e3b3c, size 0xbc, virtual false, abstract: false, final false
  static inline void add_InputFocusLost(::System::Action* value);

  static inline ::System::Action* getStaticF_InputFocusAcquired();

  static inline ::System::Action* getStaticF_InputFocusLost();

  static inline bool getStaticF_hadInputFocus();

  /// @brief Method get_hasInputFocus, addr 0x33e3cb4, size 0x4, virtual false, abstract: false, final false
  static inline bool get_hasInputFocus();

  /// @brief Method remove_InputFocusAcquired, addr 0x33e3a84, size 0xb8, virtual false, abstract: false, final false
  static inline void remove_InputFocusAcquired(::System::Action* value);

  /// @brief Method remove_InputFocusLost, addr 0x33e3bf8, size 0xbc, virtual false, abstract: false, final false
  static inline void remove_InputFocusLost(::System::Action* value);

  static inline void setStaticF_InputFocusAcquired(::System::Action* value);

  static inline void setStaticF_InputFocusLost(::System::Action* value);

  static inline void setStaticF_hadInputFocus(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFocus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFocus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFocus(InputFocus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFocus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFocus(InputFocus const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::InputFocus, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::InputFocus);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::InputFocus*, "Unity.XR.Oculus", "InputFocus");
