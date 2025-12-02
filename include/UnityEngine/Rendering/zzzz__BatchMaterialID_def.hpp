#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchMaterialID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchMaterialID)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchMaterialID;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchMaterialID);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchMaterialID
struct CORDL_TYPE BatchMaterialID {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::UnityEngine::Rendering::BatchMaterialID Null;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>*();

  /// @brief Method Equals, addr 0x68f6390, size 0xb0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68f6440, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::BatchMaterialID other);

  /// @brief Method GetHashCode, addr 0x68f6388, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::BatchMaterialID getStaticF_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchMaterialID>* i___System__IEquatable_1___UnityEngine__Rendering__BatchMaterialID_();

  /// @brief Method op_Equality, addr 0x68f6450, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::BatchMaterialID a, ::UnityEngine::Rendering::BatchMaterialID b);

  static inline void setStaticF_Null(::UnityEngine::Rendering::BatchMaterialID value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchMaterialID();

  // Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BatchMaterialID(uint32_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10821 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  uint32_t value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchMaterialID, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchMaterialID, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchMaterialID, "UnityEngine.Rendering", "BatchMaterialID");
