#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/Category.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Category)
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Item;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
struct Category;
}
// Write type traits
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::Manager::Category);
// Dependencies
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Manager.Category
struct CORDL_TYPE Category {
public:
  // Declarations
  /// @brief Field Default, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_Default, put = setStaticF_Default)) ::Meta::XR::ImmersiveDebugger::Manager::Category Default;

  __declspec(property(get = get_Label)) ::StringW Label;

  __declspec(property(get = get_Uid)) ::StringW Uid;

  /// @brief Convert operator to "::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>"
  constexpr operator ::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>*();

  /// @brief Method Equals, addr 0x58b21fc, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x58b2180, size 0x7c, virtual true, abstract: false, final true
  inline bool Equals(::Meta::XR::ImmersiveDebugger::Manager::Category other);

  /// @brief Method GetHashCode, addr 0x58b2290, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Meta::XR::ImmersiveDebugger::Manager::Category getStaticF_Default();

  /// @brief Method get_Label, addr 0x58b20b8, size 0x70, virtual false, abstract: false, final false
  inline ::StringW get_Label();

  /// @brief Method get_Uid, addr 0x58b2128, size 0x50, virtual false, abstract: false, final false
  inline ::StringW get_Uid();

  /// @brief Convert to "::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>"
  constexpr ::System::IEquatable_1<::Meta::XR::ImmersiveDebugger::Manager::Category>* i___System__IEquatable_1___Meta__XR__ImmersiveDebugger__Manager__Category_();

  static inline void setStaticF_Default(::Meta::XR::ImmersiveDebugger::Manager::Category value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Category();

  // Ctor Parameters [CppParam { name: "Id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Item", ty: "::Meta::XR::ImmersiveDebugger::Hierarchy::Item*", modifiers: "",
  // def_value: None }]
  constexpr Category(::StringW Id, ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* Item) noexcept;

  /// @brief Field DefaultCategoryName offset 0xffffffff size 0x8
  static constexpr ::ConstString DefaultCategoryName{ u"Uncategorized" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18393 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Id, offset: 0x0, size: 0x8, def value: None
  ::StringW Id;

  /// @brief Field Item, offset: 0x8, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* Item;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::Category, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::Category, Item) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::Category, 0x10>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::Category, "Meta.XR.ImmersiveDebugger.Manager", "Category");
