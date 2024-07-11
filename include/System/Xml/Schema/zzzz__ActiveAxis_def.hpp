#pragma once
// IWYU pragma private; include "System/Xml/Schema/ActiveAxis.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ActiveAxis)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class Asttree;
}
// Forward declare root types
namespace System::Xml::Schema {
class ActiveAxis;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ActiveAxis);
// Type: System.Xml.Schema::ActiveAxis
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::ActiveAxis*
class CORDL_TYPE ActiveAxis : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CurrentDepth)) int32_t CurrentDepth;

  /// @brief Field _axisStack, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__axisStack, put = __cordl_internal_set__axisStack))::System::Collections::ArrayList* _axisStack;

  /// @brief Field _axisTree, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__axisTree, put = __cordl_internal_set__axisTree))::System::Xml::Schema::Asttree* _axisTree;

  /// @brief Field _currentDepth, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__currentDepth, put = __cordl_internal_set__currentDepth)) int32_t _currentDepth;

  /// @brief Field _isActive, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive, put = __cordl_internal_set__isActive)) bool _isActive;

  /// @brief Method EndElement, addr 0x2f21334, size 0x110, virtual true, abstract: false, final false
  inline bool EndElement(::StringW localname, ::StringW URN);

  /// @brief Method MoveToAttribute, addr 0x2f21444, size 0x10c, virtual false, abstract: false, final false
  inline bool MoveToAttribute(::StringW localname, ::StringW URN);

  /// @brief Method MoveToStartElement, addr 0x2f211f4, size 0x140, virtual false, abstract: false, final false
  inline bool MoveToStartElement(::StringW localname, ::StringW URN);

  static inline ::System::Xml::Schema::ActiveAxis* New_ctor(::System::Xml::Schema::Asttree* axisTree);

  /// @brief Method Reactivate, addr 0x2f21034, size 0x14, virtual false, abstract: false, final false
  inline void Reactivate();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__axisStack();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__axisStack() const;

  constexpr ::System::Xml::Schema::Asttree*& __cordl_internal_get__axisTree();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Asttree*> const& __cordl_internal_get__axisTree() const;

  constexpr int32_t const& __cordl_internal_get__currentDepth() const;

  constexpr int32_t& __cordl_internal_get__currentDepth();

  constexpr bool const& __cordl_internal_get__isActive() const;

  constexpr bool& __cordl_internal_get__isActive();

  constexpr void __cordl_internal_set__axisStack(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__axisTree(::System::Xml::Schema::Asttree* value);

  constexpr void __cordl_internal_set__currentDepth(int32_t value);

  constexpr void __cordl_internal_set__isActive(bool value);

  /// @brief Method .ctor, addr 0x2f21048, size 0x1ac, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::Asttree* axisTree);

  /// @brief Method get_CurrentDepth, addr 0x2f2102c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_CurrentDepth();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActiveAxis();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ActiveAxis", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActiveAxis(ActiveAxis&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActiveAxis", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActiveAxis(ActiveAxis const&) = delete;

  /// @brief Field _currentDepth, offset: 0x10, size: 0x4, def value: None
  int32_t ____currentDepth;

  /// @brief Field _isActive, offset: 0x14, size: 0x1, def value: None
  bool ____isActive;

  /// @brief Field _axisTree, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::Asttree* ____axisTree;

  /// @brief Field _axisStack, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____axisStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ActiveAxis, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::ActiveAxis, ____currentDepth) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ActiveAxis, ____isActive) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ActiveAxis, ____axisTree) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ActiveAxis, ____axisStack) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ActiveAxis);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ActiveAxis*, "System.Xml.Schema", "ActiveAxis");
