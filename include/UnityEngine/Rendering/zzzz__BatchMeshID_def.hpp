#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchMeshID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchMeshID)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchMeshID;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchMeshID);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchMeshID
struct CORDL_TYPE BatchMeshID {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::UnityEngine::Rendering::BatchMeshID Null;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>*();

  /// @brief Method Equals, addr 0x48caa38, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x48caae0, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::BatchMeshID other);

  /// @brief Method GetHashCode, addr 0x48caa30, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::BatchMeshID getStaticF_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchMeshID>* i___System__IEquatable_1___UnityEngine__Rendering__BatchMeshID_();

  static inline void setStaticF_Null(::UnityEngine::Rendering::BatchMeshID value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchMeshID();

  // Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BatchMeshID(uint32_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11243 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  uint32_t value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchMeshID, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchMeshID, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchMeshID, "UnityEngine.Rendering", "BatchMeshID");
