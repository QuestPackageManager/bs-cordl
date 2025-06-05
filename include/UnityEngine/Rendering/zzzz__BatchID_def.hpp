#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchID)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchID;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchID);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.BatchID
struct CORDL_TYPE BatchID {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::UnityEngine::Rendering::BatchID Null;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchID>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchID>*();

  /// @brief Method Equals, addr 0x48cab90, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x48cac38, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::BatchID other);

  /// @brief Method GetHashCode, addr 0x48cab88, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::Rendering::BatchID getStaticF_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::BatchID>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::BatchID>* i___System__IEquatable_1___UnityEngine__Rendering__BatchID_();

  static inline void setStaticF_Null(::UnityEngine::Rendering::BatchID value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchID();

  // Ctor Parameters [CppParam { name: "value", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr BatchID(uint32_t value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11241 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  uint32_t value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchID, value) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchID, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchID, "UnityEngine.Rendering", "BatchID");
