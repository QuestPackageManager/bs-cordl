#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__CustomYieldInstruction_def.hpp"
CORDL_MODULE_EXPORT(WaitUntil)
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace UnityEngine {
class WaitUntil;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::WaitUntil);
// Type: UnityEngine::WaitUntil
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10242))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10198))
// CS Name: ::UnityEngine::WaitUntil*
class CORDL_TYPE WaitUntil : public ::UnityEngine::CustomYieldInstruction {
public:
  // Declarations
  /// @brief Field m_Predicate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Predicate, put = __cordl_internal_set_m_Predicate))::System::Func_1<bool>* m_Predicate;

  __declspec(property(get = get_keepWaiting)) bool keepWaiting;

  constexpr ::System::Func_1<bool>*& __cordl_internal_get_m_Predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<bool>*> const& __cordl_internal_get_m_Predicate() const;

  constexpr void __cordl_internal_set_m_Predicate(::System::Func_1<bool>* value);

  /// @brief Method get_keepWaiting, addr 0x2ccef78, size 0x30, virtual true, abstract: false, final false
  inline bool get_keepWaiting();

  static inline ::UnityEngine::WaitUntil* New_ctor(::System::Func_1<bool>* predicate);

  /// @brief Method .ctor, addr 0x2ccefa8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Func_1<bool>* predicate);

  // Ctor Parameters [CppParam { name: "", ty: "WaitUntil", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WaitUntil(WaitUntil&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WaitUntil", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WaitUntil(WaitUntil const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WaitUntil();

public:
  /// @brief Field m_Predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_1<bool>* ___m_Predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WaitUntil, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::WaitUntil, ___m_Predicate) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::WaitUntil);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WaitUntil*, "UnityEngine", "WaitUntil");
