#pragma once
// IWYU pragma private; include "UnityEngine/VFX/EventAttributeVector3.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeValue_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventAttributeVector3)
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::VFX {
class EventAttributeVector3___c;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::VFX {
class EventAttributeVector3;
}
namespace UnityEngine::VFX {
class EventAttributeVector3___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::EventAttributeVector3*);
MARK_REF_T(::UnityEngine::VFX::EventAttributeVector3___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::EventAttributeVector3*, "UnityEngine.VFX", "EventAttributeVector3");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::EventAttributeVector3___c*, "UnityEngine.VFX", "EventAttributeVector3/<>c");
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.EventAttributeVector3/<>c
class CORDL_TYPE EventAttributeVector3___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::VFX::EventAttributeVector3___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1)) ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector3>* __9__0_1;

  static inline ::UnityEngine::VFX::EventAttributeVector3___c* New_ctor();

  /// @brief Method <.ctor>b__0_0, addr 0x69cda00, size 0x1c, virtual false, abstract: false, final false
  inline bool __ctor_b__0_0(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id);

  /// @brief Method <.ctor>b__0_1, addr 0x69cda1c, size 0x1c, virtual false, abstract: false, final false
  inline void __ctor_b__0_1(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id, ::UnityEngine::Vector3 value);

  /// @brief Method .ctor, addr 0x69cd9fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::VFX::EventAttributeVector3___c* getStaticF___9();

  static inline ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* getStaticF___9__0_0();

  static inline ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector3>* getStaticF___9__0_1();

  static inline void setStaticF___9(::UnityEngine::VFX::EventAttributeVector3___c* value);

  static inline void setStaticF___9__0_0(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value);

  static inline void setStaticF___9__0_1(::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector3>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributeVector3___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeVector3___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttributeVector3___c(EventAttributeVector3___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeVector3___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttributeVector3___c(EventAttributeVector3___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19908 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::EventAttributeVector3___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.VFX.EventAttributeValue`1<T>, UnityEngine.Vector3
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.EventAttributeVector3
class CORDL_TYPE EventAttributeVector3 : public ::UnityEngine::VFX::EventAttributeValue_1<::UnityEngine::Vector3> {
public:
  // Declarations
  using __c = ::UnityEngine::VFX::EventAttributeVector3___c;

  static inline ::UnityEngine::VFX::EventAttributeVector3* New_ctor();

  /// @brief Method .ctor, addr 0x69cd828, size 0x180, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributeVector3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeVector3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttributeVector3(EventAttributeVector3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeVector3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttributeVector3(EventAttributeVector3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19909 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::EventAttributeVector3) == 0x38, "Size mismatch!");

} // namespace UnityEngine::VFX
