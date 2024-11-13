#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BatchID)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchID;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::BatchID);
// Type: UnityEngine.Rendering::BatchID
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: ::UnityEngine.Rendering::BatchID
struct CORDL_TYPE BatchID {
public:
  // Declarations
  /// @brief Field Null, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::UnityEngine::Rendering::BatchID Null;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::BatchID>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchID>*();

  /// @brief Method Equals, addr 0x4866d58, size 0xa8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4866e00, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::BatchID other);

  /// @brief Method GetHashCode, addr 0x4866d50, size 0x8, virtual true, abstract: false, final false
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

  /// @brief Field value, offset: 0x0, size: 0x4, def value: None
  uint32_t value;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11203 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchID, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchID, value) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchID, "UnityEngine.Rendering", "BatchID");
