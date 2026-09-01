#pragma once
// IWYU pragma private; include "UnityEngine\VFX\EventAttributeUInt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__EventAttributeValue_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventAttributeUInt)
namespace System {
template <typename T1, typename T2, typename T3> class Action_3;
}
namespace System {
template <typename T1, typename T2, typename TResult> class Func_3;
}
namespace UnityEngine::VFX {
class EventAttributeUInt___c;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
// Forward declare root types
namespace UnityEngine::VFX {
class EventAttributeUInt;
}
namespace UnityEngine::VFX {
class EventAttributeUInt___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::EventAttributeUInt*);
MARK_REF_T(::UnityEngine::VFX::EventAttributeUInt___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::EventAttributeUInt*, "UnityEngine.VFX", "EventAttributeUInt");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::EventAttributeUInt___c*, "UnityEngine.VFX", "EventAttributeUInt/<>c");
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.EventAttributeUInt/<>c
class CORDL_TYPE EventAttributeUInt___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::VFX::EventAttributeUInt___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1)) ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, uint32_t>* __9__0_1;

  static inline ::UnityEngine::VFX::EventAttributeUInt___c* New_ctor();

  /// @brief Method <.ctor>b__0_0, addr 0x69d3850, size 0x1c, virtual false, abstract: false, final false
  inline bool __ctor_b__0_0(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id);

  /// @brief Method <.ctor>b__0_1, addr 0x69d386c, size 0x20, virtual false, abstract: false, final false
  inline void __ctor_b__0_1(::UnityEngine::VFX::VFXEventAttribute* e, int32_t id, uint32_t value);

  /// @brief Method .ctor, addr 0x69d384c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::VFX::EventAttributeUInt___c* getStaticF___9();

  static inline ::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* getStaticF___9__0_0();

  static inline ::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, uint32_t>* getStaticF___9__0_1();

  static inline void setStaticF___9(::UnityEngine::VFX::EventAttributeUInt___c* value);

  static inline void setStaticF___9__0_0(::System::Func_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, bool>* value);

  static inline void setStaticF___9__0_1(::System::Action_3<::UnityEngine::VFX::VFXEventAttribute*, int32_t, uint32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributeUInt___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeUInt___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttributeUInt___c(EventAttributeUInt___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeUInt___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttributeUInt___c(EventAttributeUInt___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19948 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::EventAttributeUInt___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX
// Dependencies UnityEngine.VFX.EventAttributeValue`1<T>
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.EventAttributeUInt
class CORDL_TYPE EventAttributeUInt : public ::UnityEngine::VFX::EventAttributeValue_1<uint32_t> {
public:
  // Declarations
  using __c = ::UnityEngine::VFX::EventAttributeUInt___c;

  static inline ::UnityEngine::VFX::EventAttributeUInt* New_ctor();

  /// @brief Method .ctor, addr 0x69d3678, size 0x180, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributeUInt();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeUInt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventAttributeUInt(EventAttributeUInt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventAttributeUInt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventAttributeUInt(EventAttributeUInt const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19949 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::EventAttributeUInt) == 0x30, "Size mismatch!");

} // namespace UnityEngine::VFX
