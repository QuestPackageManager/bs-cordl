#pragma once
// IWYU pragma private; include "UnityEngine/Events/CachedInvokableCall_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__InvokableCall_1_def.hpp"
CORDL_MODULE_EXPORT(CachedInvokableCall_1)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Events {
template <typename T> class CachedInvokableCall_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Events::CachedInvokableCall_1);
// Dependencies UnityEngine.Events.InvokableCall`1<T1>
namespace UnityEngine::Events {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Events.CachedInvokableCall`1<T>
class CORDL_TYPE CachedInvokableCall_1 : public ::UnityEngine::Events::InvokableCall_1<T> {
public:
  // Declarations
  /// @brief Field m_Arg1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Arg1, put = __cordl_internal_set_m_Arg1)) T m_Arg1;

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(T arg0);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::UnityEngine::Events::CachedInvokableCall_1<T>* New_ctor(::UnityEngine::Object* target, ::System::Reflection::MethodInfo* theFunction, T argument);

  constexpr T const& __cordl_internal_get_m_Arg1() const;

  constexpr T& __cordl_internal_get_m_Arg1();

  constexpr void __cordl_internal_set_m_Arg1(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Object* target, ::System::Reflection::MethodInfo* theFunction, T argument);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CachedInvokableCall_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CachedInvokableCall_1(CachedInvokableCall_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CachedInvokableCall_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CachedInvokableCall_1(CachedInvokableCall_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10984 };

  /// @brief Field m_Arg1, offset: 0x18, size: 0x8, def value: None
  T ___m_Arg1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Events
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Events::CachedInvokableCall_1, "UnityEngine.Events", "CachedInvokableCall`1");
