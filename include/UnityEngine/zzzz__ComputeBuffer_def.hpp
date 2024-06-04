#pragma once
// IWYU pragma private; include "UnityEngine/ComputeBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeBuffer)
// Forward declare root types
namespace UnityEngine {
class ComputeBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ComputeBuffer);
// Type: UnityEngine::ComputeBuffer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ComputeBuffer*
class CORDL_TYPE ComputeBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr))::System::IntPtr m_Ptr;

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeBuffer(ComputeBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeBuffer(ComputeBuffer const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ComputeBuffer, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ComputeBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ComputeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ComputeBuffer*, "UnityEngine", "ComputeBuffer");
