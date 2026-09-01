#pragma once
// IWYU pragma private; include "UnityEngine\VFX\EventAttributeVector4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeValue_1_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventAttributeVector4)
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::VFX {
class EventAttributeVector4___c;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::VFX {
class EventAttributeVector4;
}
namespace UnityEngine::VFX {
class EventAttributeVector4___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::EventAttributeVector4*);
MARK_REF_T(::UnityEngine::VFX::EventAttributeVector4___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::EventAttributeVector4*, "UnityEngine.VFX", "EventAttributeVector4");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::EventAttributeVector4___c*, "UnityEngine.VFX", "EventAttributeVector4/<>c");
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.EventAttributeVector4/<>c
class CORDL_TYPE EventAttributeVector4___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::VFX::EventAttributeVector4___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1)) ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector4>* __9__0_1;

  static inline ::UnityEngine::VFX::EventAttributeVector4___c* New_ctor();

  /// @brief Method <.ctor>b__0_0, addr 0x69d342c, size 0x1c, virtual false, abstract: false, final false
  inline bool __ctor_b__0_0(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id);

  /// @brief Method <.ctor>b__0_1, addr 0x69d3448, size 0x1c, virtual false, abstract: false, final false
  inline void __ctor_b__0_1(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id, ::UnityEngine::Vector4 value);

  /// @brief Method .ctor, addr 0x69d3428, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::VFX::EventAttributeVector4___c* getStaticF___9();

  static inline ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* getStaticF___9__0_0();

  static inline ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector4>* getStaticF___9__0_1();

  static inline void setStaticF___9(::UnityEngine::VFX::EventAttributeVector4___c* value);

  static inline void setStaticF___9__0_0(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value);

  static inline void setStaticF___9__0_1(::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, ::UnityEngine::Vector4>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributeVector4___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeVector4___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttributeVector4___c(EventAttributeVector4___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeVector4___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttributeVector4___c(EventAttributeVector4___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19944 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::EventAttributeVector4___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.VFX.EventAttributeValue`1<T>, UnityEngine.Vector4
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.EventAttributeVector4
class CORDL_TYPE EventAttributeVector4 : public ::UnityEngine::VFX::EventAttributeValue_1<::UnityEngine::Vector4> {
public:
  // Declarations
  using __c = ::UnityEngine::VFX::EventAttributeVector4___c;

  static inline ::UnityEngine::VFX::EventAttributeVector4* New_ctor();

  /// @brief Method .ctor, addr 0x69d3254, size 0x180, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributeVector4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeVector4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttributeVector4(EventAttributeVector4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeVector4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttributeVector4(EventAttributeVector4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19945 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::EventAttributeVector4) == 0x38, "Size mismatch!");

} // namespace UnityEngine::VFX
