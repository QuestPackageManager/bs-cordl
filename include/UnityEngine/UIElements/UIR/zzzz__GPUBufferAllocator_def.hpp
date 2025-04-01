#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GPUBufferAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GPUBufferAllocator)
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class BestFitAllocator;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class GPUBufferAllocator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::GPUBufferAllocator);
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.GPUBufferAllocator
class CORDL_TYPE GPUBufferAllocator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Field m_High, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_High, put = __cordl_internal_set_m_High)) ::UnityEngine::UIElements::UIR::BestFitAllocator* m_High;

  /// @brief Field m_Low, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Low, put = __cordl_internal_set_m_Low)) ::UnityEngine::UIElements::UIR::BestFitAllocator* m_Low;

  /// @brief Method Allocate, addr 0x49b1f2c, size 0x12c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Alloc Allocate(uint32_t size, bool shortLived);

  /// @brief Method Free, addr 0x49b2058, size 0x84, virtual false, abstract: false, final false
  inline void Free(::UnityEngine::UIElements::UIR::Alloc alloc);

  /// @brief Method HighLowCollide, addr 0x49b60bc, size 0x38, virtual false, abstract: false, final false
  inline bool HighLowCollide();

  static inline ::UnityEngine::UIElements::UIR::GPUBufferAllocator* New_ctor(uint32_t maxSize);

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* const& __cordl_internal_get_m_High() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& __cordl_internal_get_m_High();

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator* const& __cordl_internal_get_m_Low() const;

  constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator*& __cordl_internal_get_m_Low();

  constexpr void __cordl_internal_set_m_High(::UnityEngine::UIElements::UIR::BestFitAllocator* value);

  constexpr void __cordl_internal_set_m_Low(::UnityEngine::UIElements::UIR::BestFitAllocator* value);

  /// @brief Method .ctor, addr 0x49b6034, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(uint32_t maxSize);

  /// @brief Method get_isEmpty, addr 0x49b60f4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isEmpty();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUBufferAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUBufferAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUBufferAllocator(GPUBufferAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUBufferAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUBufferAllocator(GPUBufferAllocator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6428 };

  /// @brief Field m_Low, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator* ___m_Low;

  /// @brief Field m_High, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BestFitAllocator* ___m_High;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::GPUBufferAllocator, ___m_Low) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::GPUBufferAllocator, ___m_High) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::GPUBufferAllocator, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::GPUBufferAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::GPUBufferAllocator*, "UnityEngine.UIElements.UIR", "GPUBufferAllocator");
