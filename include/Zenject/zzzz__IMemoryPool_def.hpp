#pragma once
// IWYU pragma private; include "Zenject/IMemoryPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IMemoryPool)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class IMemoryPool;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::IMemoryPool);
// Dependencies
namespace Zenject {
// Is value type: false
// CS Name: Zenject.IMemoryPool
class CORDL_TYPE IMemoryPool {
public:
  // Declarations
  __declspec(property(get = get_ItemType)) ::System::Type* ItemType;

  __declspec(property(get = get_NumActive)) int32_t NumActive;

  __declspec(property(get = get_NumInactive)) int32_t NumInactive;

  __declspec(property(get = get_NumTotal)) int32_t NumTotal;

  /// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Despawn, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Despawn(::System::Object* obj);

  /// @brief Method ExpandBy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExpandBy(int32_t numToAdd);

  /// @brief Method Resize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Resize(int32_t desiredPoolSize);

  /// @brief Method ShrinkBy, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ShrinkBy(int32_t numToRemove);

  /// @brief Method get_ItemType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_ItemType();

  /// @brief Method get_NumActive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_NumActive();

  /// @brief Method get_NumInactive, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_NumInactive();

  /// @brief Method get_NumTotal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_NumTotal();

  // Ctor Parameters [CppParam { name: "", ty: "IMemoryPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMemoryPool(IMemoryPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14354 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
NEED_NO_BOX(::Zenject::IMemoryPool);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IMemoryPool*, "Zenject", "IMemoryPool");
