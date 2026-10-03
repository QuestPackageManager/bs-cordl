#pragma once
// IWYU pragma private; include "UnityEngine/TransformHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__EntityId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformHandle)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct TransformHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TransformHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::TransformHandle, "UnityEngine", "TransformHandle");
// [UsedByNativeCode]
// [NativeClass("TransformHandle")]
// Dependencies System.IntPtr, UnityEngine.EntityId
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.TransformHandle
struct CORDL_TYPE TransformHandle {
public:
  // Declarations
  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::TransformHandle>"
  constexpr operator ::System::IComparable_1<::UnityEngine::TransformHandle>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TransformHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TransformHandle>*();

  /// @brief Method CompareTo, addr 0x6f55fdc, size 0x14, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::TransformHandle other);

  /// @brief Method Equals, addr 0x6f55f50, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6f55fcc, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TransformHandle other);

  /// @brief Method GetHashCode, addr 0x6f55ff0, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::TransformHandle>"
  constexpr ::System::IComparable_1<::UnityEngine::TransformHandle>* i___System__IComparable_1___UnityEngine__TransformHandle_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TransformHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::TransformHandle>* i___System__IEquatable_1___UnityEngine__TransformHandle_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformHandle();

  // Ctor Parameters [CppParam { name: "pTransformData", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "id", ty: "::UnityEngine::EntityId", modifiers: "",
  // def_value: None, comment: None }]
  constexpr TransformHandle(::System::IntPtr pTransformData, ::UnityEngine::EntityId id) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10015 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field pTransformData, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr pTransformData;

  /// [SerializeField]
  /// @brief Field id, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::EntityId id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TransformHandle, pTransformData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TransformHandle, id) == 0x8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TransformHandle) == 0x10, "Size mismatch!");

} // namespace UnityEngine
