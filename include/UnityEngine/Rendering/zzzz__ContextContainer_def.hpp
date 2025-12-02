#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ContextContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContextContainer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
struct ContextContainer_Item;
}
namespace UnityEngine::Rendering {
template <typename T> class ContextContainer_TypeId_1;
}
namespace UnityEngine::Rendering {
class ContextItem;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
template <typename T> class ContextContainer_TypeId_1;
}
namespace UnityEngine::Rendering {
struct ContextContainer_Item;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ContextContainer);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ContextContainer_TypeId_1);
MARK_VAL_T(::UnityEngine::Rendering::ContextContainer_Item);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.ContextContainer/TypeId`1<T>
class CORDL_TYPE ContextContainer_TypeId_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field value, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_value, put = setStaticF_value)) uint32_t value;

  static inline uint32_t getStaticF_value();

  static inline void setStaticF_value(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextContainer_TypeId_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextContainer_TypeId_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextContainer_TypeId_1(ContextContainer_TypeId_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextContainer_TypeId_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextContainer_TypeId_1(ContextContainer_TypeId_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ContextContainer/Item
struct CORDL_TYPE ContextContainer_Item {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextContainer_Item();

  // Ctor Parameters [CppParam { name: "storage", ty: "::UnityEngine::Rendering::ContextItem*", modifiers: "", def_value: None }, CppParam { name: "isSet", ty: "bool", modifiers: "", def_value: None
  // }]
  constexpr ContextContainer_Item(::UnityEngine::Rendering::ContextItem* storage, bool isSet) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11859 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field storage, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ContextItem* storage;

  /// @brief Field isSet, offset: 0x8, size: 0x1, def value: None
  bool isSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ContextContainer_Item, storage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ContextContainer_Item, isSet) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ContextContainer_Item, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ContextContainer
class CORDL_TYPE ContextContainer : public ::System::Object {
public:
  // Declarations
  using Item = ::UnityEngine::Rendering::ContextContainer_Item;

  template <typename T> using TypeId_1 = ::UnityEngine::Rendering::ContextContainer_TypeId_1<T>;

  /// @brief Field m_ActiveItemIndices, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveItemIndices, put = __cordl_internal_set_m_ActiveItemIndices)) ::System::Collections::Generic::List_1<uint32_t>* m_ActiveItemIndices;

  /// @brief Field m_Items, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Items,
                      put = __cordl_internal_set_m_Items)) ::ArrayW<::UnityEngine::Rendering::ContextContainer_Item, ::Array<::UnityEngine::Rendering::ContextContainer_Item>*>
      m_Items;

  /// @brief Field s_TypeCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_TypeCount, put = setStaticF_s_TypeCount)) uint32_t s_TypeCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool Contains();

  /// @brief Method Contains, addr 0x653771c, size 0x4c, virtual false, abstract: false, final false
  inline bool Contains(uint32_t typeId);

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Create();

  /// @brief Method CreateAndGetData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T CreateAndGetData(uint32_t typeId);

  /// @brief Method Dispose, addr 0x6537768, size 0x17c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T Get();

  /// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetOrCreate();

  static inline ::UnityEngine::Rendering::ContextContainer* New_ctor();

  constexpr ::System::Collections::Generic::List_1<uint32_t>* const& __cordl_internal_get_m_ActiveItemIndices() const;

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __cordl_internal_get_m_ActiveItemIndices();

  constexpr ::ArrayW<::UnityEngine::Rendering::ContextContainer_Item, ::Array<::UnityEngine::Rendering::ContextContainer_Item>*> const& __cordl_internal_get_m_Items() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::ContextContainer_Item, ::Array<::UnityEngine::Rendering::ContextContainer_Item>*>& __cordl_internal_get_m_Items();

  constexpr void __cordl_internal_set_m_ActiveItemIndices(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr void __cordl_internal_set_m_Items(::ArrayW<::UnityEngine::Rendering::ContextContainer_Item, ::Array<::UnityEngine::Rendering::ContextContainer_Item>*> value);

  /// @brief Method .ctor, addr 0x65378e4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  static inline uint32_t getStaticF_s_TypeCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_TypeCount(uint32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextContainer(ContextContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextContainer(ContextContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11860 };

  /// @brief Field m_Items, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::ContextContainer_Item, ::Array<::UnityEngine::Rendering::ContextContainer_Item>*> ___m_Items;

  /// @brief Field m_ActiveItemIndices, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_ActiveItemIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ContextContainer, ___m_Items) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ContextContainer, ___m_ActiveItemIndices) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ContextContainer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ContextContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ContextContainer*, "UnityEngine.Rendering", "ContextContainer");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ContextContainer_TypeId_1, "UnityEngine.Rendering", "ContextContainer/TypeId`1");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ContextContainer_Item, "UnityEngine.Rendering", "ContextContainer/Item");
