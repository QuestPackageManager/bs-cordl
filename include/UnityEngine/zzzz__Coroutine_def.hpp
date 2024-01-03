#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Coroutine)
// Forward declare root types
namespace UnityEngine {
class Coroutine;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Coroutine);
// Type: UnityEngine::Coroutine
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(10191))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10233))
// CS Name: ::UnityEngine::Coroutine*
class CORDL_TYPE Coroutine : public ::UnityEngine::YieldInstruction {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  static inline ::UnityEngine::Coroutine* New_ctor();

  /// @brief Method .ctor, addr 0x2cd3678, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Finalize, addr 0x2cd3680, size 0xbc, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method ReleaseCoroutine, addr 0x2cd373c, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseCoroutine(void* ptr);

  // Ctor Parameters [CppParam { name: "", ty: "Coroutine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Coroutine(Coroutine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Coroutine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Coroutine(Coroutine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Coroutine();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Coroutine, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Coroutine, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Coroutine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Coroutine*, "UnityEngine", "Coroutine");
