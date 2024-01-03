#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Grounder)
namespace RootMotion::FinalIK {
class Grounding;
}
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class __Grounding__Leg;
}
namespace RootMotion::FinalIK {
class __Grounder__GrounderDelegate;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class Grounder;
}
namespace RootMotion::FinalIK {
class __Grounder__GrounderDelegate;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::Grounder);
MARK_REF_PTR_T(::RootMotion::FinalIK::__Grounder__GrounderDelegate);
// Type: ::GrounderDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12517))
// CS Name: ::Grounder::GrounderDelegate*
class CORDL_TYPE __Grounder__GrounderDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::RootMotion::FinalIK::__Grounder__GrounderDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x12447b4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x1244870, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  /// @brief Method BeginInvoke, addr 0x1244884, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x12448a4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__Grounder__GrounderDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Grounder__GrounderDelegate(__Grounder__GrounderDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Grounder__GrounderDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Grounder__GrounderDelegate(__Grounder__GrounderDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Grounder__GrounderDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__Grounder__GrounderDelegate, 0x80>, "Size mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::Grounder
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12518))
// CS Name: ::RootMotion.FinalIK::Grounder*
class CORDL_TYPE Grounder : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GrounderDelegate = ::RootMotion::FinalIK::__Grounder__GrounderDelegate;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field solver, offset 0x20, size 0x8
  __declspec(property(get = __get_solver, put = __set_solver))::RootMotion::FinalIK::Grounding* solver;

  /// @brief Field OnPreGrounder, offset 0x28, size 0x8
  __declspec(property(get = __get_OnPreGrounder, put = __set_OnPreGrounder))::RootMotion::FinalIK::__Grounder__GrounderDelegate* OnPreGrounder;

  /// @brief Field OnPostGrounder, offset 0x30, size 0x8
  __declspec(property(get = __get_OnPostGrounder, put = __set_OnPostGrounder))::RootMotion::FinalIK::__Grounder__GrounderDelegate* OnPostGrounder;

  /// @brief Field <initiated>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __get__initiated_k__BackingField, put = __set__initiated_k__BackingField)) bool _initiated_k__BackingField;

  __declspec(property(get = get_initiated, put = set_initiated)) bool initiated;

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr ::RootMotion::FinalIK::Grounding*& __get_solver();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::Grounding*> const& __get_solver() const;

  constexpr void __set_solver(::RootMotion::FinalIK::Grounding* value);

  constexpr ::RootMotion::FinalIK::__Grounder__GrounderDelegate*& __get_OnPreGrounder();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__Grounder__GrounderDelegate*> const& __get_OnPreGrounder() const;

  constexpr void __set_OnPreGrounder(::RootMotion::FinalIK::__Grounder__GrounderDelegate* value);

  constexpr ::RootMotion::FinalIK::__Grounder__GrounderDelegate*& __get_OnPostGrounder();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__Grounder__GrounderDelegate*> const& __get_OnPostGrounder() const;

  constexpr void __set_OnPostGrounder(::RootMotion::FinalIK::__Grounder__GrounderDelegate* value);

  constexpr bool& __get__initiated_k__BackingField();

  constexpr bool const& __get__initiated_k__BackingField() const;

  constexpr void __set__initiated_k__BackingField(bool value);

  /// @brief Method ResetPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ResetPosition();

  /// @brief Method get_initiated, addr 0x12442e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_initiated();

  /// @brief Method set_initiated, addr 0x12442f0, size 0xc, virtual false, abstract: false, final false
  inline void set_initiated(bool value);

  /// @brief Method GetSpineOffsetTarget, addr 0x12442fc, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetSpineOffsetTarget();

  /// @brief Method LogWarning, addr 0x12445ac, size 0x24, virtual false, abstract: false, final false
  inline void LogWarning(::StringW message);

  /// @brief Method GetLegSpineBendVector, addr 0x12443c0, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLegSpineBendVector(::RootMotion::FinalIK::__Grounding__Leg* leg);

  /// @brief Method GetLegSpineTangent, addr 0x12445d0, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetLegSpineTangent(::RootMotion::FinalIK::__Grounding__Leg* leg);

  /// @brief Method OpenUserManual, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OpenScriptReference();

  static inline ::RootMotion::FinalIK::Grounder* New_ctor();

  /// @brief Method .ctor, addr 0x1244744, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Grounder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Grounder(Grounder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Grounder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Grounder(Grounder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Grounder();

public:
  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field solver, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::Grounding* ___solver;

  /// @brief Field OnPreGrounder, offset: 0x28, size: 0x8, def value: None
  ::RootMotion::FinalIK::__Grounder__GrounderDelegate* ___OnPreGrounder;

  /// @brief Field OnPostGrounder, offset: 0x30, size: 0x8, def value: None
  ::RootMotion::FinalIK::__Grounder__GrounderDelegate* ___OnPostGrounder;

  /// @brief Field <initiated>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____initiated_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::Grounder, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounder, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounder, ___solver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounder, ___OnPreGrounder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounder, ___OnPostGrounder) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::Grounder, ____initiated_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::Grounder);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::Grounder*, "RootMotion.FinalIK", "Grounder");
NEED_NO_BOX(::RootMotion::FinalIK::__Grounder__GrounderDelegate);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__Grounder__GrounderDelegate*, "RootMotion.FinalIK", "Grounder/GrounderDelegate");
