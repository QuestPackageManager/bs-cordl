#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalEntityIndexer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalEntityIndexer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace UnityEngine::Rendering::Universal {
struct DecalEntityIndexer_DecalEntityItem;
}
namespace UnityEngine::Rendering::Universal {
struct DecalEntity;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalEntityIndexer;
}
namespace UnityEngine::Rendering::Universal {
struct DecalEntityIndexer_DecalEntityItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalEntityIndexer);
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalEntityIndexer/DecalEntityItem
struct CORDL_TYPE DecalEntityIndexer_DecalEntityItem {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalEntityIndexer_DecalEntityItem();

  // Ctor Parameters [CppParam { name: "chunkIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "arrayIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DecalEntityIndexer_DecalEntityItem(int32_t chunkIndex, int32_t arrayIndex, int32_t version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12668 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field chunkIndex, offset: 0x0, size: 0x4, def value: None
  int32_t chunkIndex;

  /// @brief Field arrayIndex, offset: 0x4, size: 0x4, def value: None
  int32_t arrayIndex;

  /// @brief Field version, offset: 0x8, size: 0x4, def value: None
  int32_t version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem, chunkIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem, arrayIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem, version) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalEntityIndexer
class CORDL_TYPE DecalEntityIndexer : public ::System::Object {
public:
  // Declarations
  using DecalEntityItem = ::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem;

  /// @brief Field m_Entities, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Entities,
                      put = __cordl_internal_set_m_Entities)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem>* m_Entities;

  /// @brief Field m_FreeIndices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeIndices, put = __cordl_internal_set_m_FreeIndices)) ::System::Collections::Generic::Queue_1<int32_t>* m_FreeIndices;

  /// @brief Method Clear, addr 0x66a3a10, size 0x90, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateDecalEntity, addr 0x66a3570, size 0x1a4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalEntity CreateDecalEntity(int32_t arrayIndex, int32_t chunkIndex);

  /// @brief Method DestroyDecalEntity, addr 0x66a3714, size 0xc4, virtual false, abstract: false, final false
  inline void DestroyDecalEntity(::UnityEngine::Rendering::Universal::DecalEntity decalEntity);

  /// @brief Method GetItem, addr 0x66a37d8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem GetItem(::UnityEngine::Rendering::Universal::DecalEntity decalEntity);

  /// @brief Method IsValid, addr 0x66a34d4, size 0x9c, virtual false, abstract: false, final false
  inline bool IsValid(::UnityEngine::Rendering::Universal::DecalEntity decalEntity);

  static inline ::UnityEngine::Rendering::Universal::DecalEntityIndexer* New_ctor();

  /// @brief Method RemapChunkIndices, addr 0x66a38e8, size 0x128, virtual false, abstract: false, final false
  inline void RemapChunkIndices(::System::Collections::Generic::List_1<int32_t>* remaper);

  /// @brief Method UpdateIndex, addr 0x66a3844, size 0xa4, virtual false, abstract: false, final false
  inline void UpdateIndex(::UnityEngine::Rendering::Universal::DecalEntity decalEntity, int32_t newArrayIndex);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem>* const& __cordl_internal_get_m_Entities() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem>*& __cordl_internal_get_m_Entities();

  constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get_m_FreeIndices() const;

  constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get_m_FreeIndices();

  constexpr void __cordl_internal_set_m_Entities(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem>* value);

  constexpr void __cordl_internal_set_m_FreeIndices(::System::Collections::Generic::Queue_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x66a3aa0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalEntityIndexer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityIndexer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalEntityIndexer(DecalEntityIndexer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityIndexer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalEntityIndexer(DecalEntityIndexer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12669 };

  /// @brief Field m_Entities, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem>* ___m_Entities;

  /// @brief Field m_FreeIndices, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<int32_t>* ___m_FreeIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityIndexer, ___m_Entities) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityIndexer, ___m_FreeIndices) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalEntityIndexer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalEntityIndexer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntityIndexer*, "UnityEngine.Rendering.Universal", "DecalEntityIndexer");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntityIndexer_DecalEntityItem, "UnityEngine.Rendering.Universal", "DecalEntityIndexer/DecalEntityItem");
