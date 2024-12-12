#pragma once
// IWYU pragma private; include "UnityEngine/XR/MeshId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshId)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR {
struct MeshId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::MeshId);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.MeshId
struct CORDL_TYPE MeshId {
public:
  // Declarations
  /// @brief Field s_InvalidId, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_InvalidId, put = setStaticF_s_InvalidId)) ::UnityEngine::XR::MeshId s_InvalidId;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::MeshId>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::MeshId>*();

  /// @brief Method Equals, addr 0x4ae9908, size 0xb8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4ae99c0, size 0x24, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::MeshId other);

  /// @brief Method GetHashCode, addr 0x4ae98d4, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4ae9840, size 0x94, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::UnityEngine::XR::MeshId getStaticF_s_InvalidId();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::MeshId>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::MeshId>* i___System__IEquatable_1___UnityEngine__XR__MeshId_();

  static inline void setStaticF_s_InvalidId(::UnityEngine::XR::MeshId value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshId();

  // Ctor Parameters [CppParam { name: "m_SubId1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "m_SubId2", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr MeshId(uint64_t m_SubId1, uint64_t m_SubId2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18282 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_SubId1, offset: 0x0, size: 0x8, def value: None
  uint64_t m_SubId1;

  /// @brief Field m_SubId2, offset: 0x8, size: 0x8, def value: None
  uint64_t m_SubId2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::MeshId, m_SubId1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::MeshId, m_SubId2) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::MeshId, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshId, "UnityEngine.XR", "MeshId");
