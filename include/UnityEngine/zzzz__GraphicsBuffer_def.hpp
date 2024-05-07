#pragma once
// IWYU pragma private; include "UnityEngine/GraphicsBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphicsBuffer)
namespace UnityEngine {
struct __GraphicsBuffer__Target;
}
// Forward declare root types
namespace UnityEngine {
struct __GraphicsBuffer__Target;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__GraphicsBuffer__Target);
MARK_REF_PTR_T(::UnityEngine::GraphicsBuffer);
// Type: ::Target
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::GraphicsBuffer::Target
struct CORDL_TYPE __GraphicsBuffer__Target {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GraphicsBuffer__Target_Unwrapped
  enum struct ____GraphicsBuffer__Target_Unwrapped : int32_t {
    __E_Vertex = static_cast<int32_t>(0x1),
    __E_Index = static_cast<int32_t>(0x2),
    __E_CopySource = static_cast<int32_t>(0x4),
    __E_CopyDestination = static_cast<int32_t>(0x8),
    __E_Structured = static_cast<int32_t>(0x10),
    __E_Raw = static_cast<int32_t>(0x20),
    __E_Append = static_cast<int32_t>(0x40),
    __E_Counter = static_cast<int32_t>(0x80),
    __E_IndirectArguments = static_cast<int32_t>(0x100),
    __E_Constant = static_cast<int32_t>(0x200),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GraphicsBuffer__Target_Unwrapped() const noexcept {
    return static_cast<____GraphicsBuffer__Target_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GraphicsBuffer__Target();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GraphicsBuffer__Target(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Append value: static_cast<int32_t>(0x40)
  static ::UnityEngine::__GraphicsBuffer__Target const Append;

  /// @brief Field Constant value: static_cast<int32_t>(0x200)
  static ::UnityEngine::__GraphicsBuffer__Target const Constant;

  /// @brief Field CopyDestination value: static_cast<int32_t>(0x8)
  static ::UnityEngine::__GraphicsBuffer__Target const CopyDestination;

  /// @brief Field CopySource value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__GraphicsBuffer__Target const CopySource;

  /// @brief Field Counter value: static_cast<int32_t>(0x80)
  static ::UnityEngine::__GraphicsBuffer__Target const Counter;

  /// @brief Field Index value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__GraphicsBuffer__Target const Index;

  /// @brief Field IndirectArguments value: static_cast<int32_t>(0x100)
  static ::UnityEngine::__GraphicsBuffer__Target const IndirectArguments;

  /// @brief Field Raw value: static_cast<int32_t>(0x20)
  static ::UnityEngine::__GraphicsBuffer__Target const Raw;

  /// @brief Field Structured value: static_cast<int32_t>(0x10)
  static ::UnityEngine::__GraphicsBuffer__Target const Structured;

  /// @brief Field Vertex value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__GraphicsBuffer__Target const Vertex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__GraphicsBuffer__Target, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__GraphicsBuffer__Target, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::GraphicsBuffer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GraphicsBuffer*
class CORDL_TYPE GraphicsBuffer : public ::System::Object {
public:
  // Declarations
  using Target = ::UnityEngine::__GraphicsBuffer__Target;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicsBuffer(GraphicsBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicsBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicsBuffer(GraphicsBuffer const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GraphicsBuffer, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::GraphicsBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__GraphicsBuffer__Target, "UnityEngine", "GraphicsBuffer/Target");
NEED_NO_BOX(::UnityEngine::GraphicsBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GraphicsBuffer*, "UnityEngine", "GraphicsBuffer");
