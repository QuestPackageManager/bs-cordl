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
struct GraphicsBuffer_Target;
}
// Forward declare root types
namespace UnityEngine {
struct GraphicsBuffer_Target;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Write type traits
MARK_VAL_T(::UnityEngine::GraphicsBuffer_Target);
MARK_REF_PTR_T(::UnityEngine::GraphicsBuffer);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.GraphicsBuffer/Target
struct CORDL_TYPE GraphicsBuffer_Target {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GraphicsBuffer_Target_Unwrapped
  enum struct __GraphicsBuffer_Target_Unwrapped : int32_t {
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
  constexpr operator __GraphicsBuffer_Target_Unwrapped() const noexcept {
    return static_cast<__GraphicsBuffer_Target_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicsBuffer_Target();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GraphicsBuffer_Target(int32_t value__) noexcept;

  /// @brief Field Append value: I32(64)
  static ::UnityEngine::GraphicsBuffer_Target const Append;

  /// @brief Field Constant value: I32(512)
  static ::UnityEngine::GraphicsBuffer_Target const Constant;

  /// @brief Field CopyDestination value: I32(8)
  static ::UnityEngine::GraphicsBuffer_Target const CopyDestination;

  /// @brief Field CopySource value: I32(4)
  static ::UnityEngine::GraphicsBuffer_Target const CopySource;

  /// @brief Field Counter value: I32(128)
  static ::UnityEngine::GraphicsBuffer_Target const Counter;

  /// @brief Field Index value: I32(2)
  static ::UnityEngine::GraphicsBuffer_Target const Index;

  /// @brief Field IndirectArguments value: I32(256)
  static ::UnityEngine::GraphicsBuffer_Target const IndirectArguments;

  /// @brief Field Raw value: I32(32)
  static ::UnityEngine::GraphicsBuffer_Target const Raw;

  /// @brief Field Structured value: I32(16)
  static ::UnityEngine::GraphicsBuffer_Target const Structured;

  /// @brief Field Vertex value: I32(1)
  static ::UnityEngine::GraphicsBuffer_Target const Vertex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10739 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GraphicsBuffer_Target, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GraphicsBuffer_Target, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GraphicsBuffer
class CORDL_TYPE GraphicsBuffer : public ::System::Object {
public:
  // Declarations
  using Target = ::UnityEngine::GraphicsBuffer_Target;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10740 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GraphicsBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GraphicsBuffer, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GraphicsBuffer_Target, "UnityEngine", "GraphicsBuffer/Target");
NEED_NO_BOX(::UnityEngine::GraphicsBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GraphicsBuffer*, "UnityEngine", "GraphicsBuffer");
