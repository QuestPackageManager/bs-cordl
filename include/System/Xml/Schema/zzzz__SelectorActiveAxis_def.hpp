#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ActiveAxis_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SelectorActiveAxis)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class Asttree;
}
namespace System::Xml::Schema {
class ConstraintStruct;
}
namespace System::Xml::Schema {
class KeySequence;
}
// Forward declare root types
namespace System::Xml::Schema {
class SelectorActiveAxis;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SelectorActiveAxis);
// Type: System.Xml.Schema::SelectorActiveAxis
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::SelectorActiveAxis*
class CORDL_TYPE SelectorActiveAxis : public ::System::Xml::Schema::ActiveAxis {
public:
  // Declarations
  /// @brief Field KSpointer, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_KSpointer, put = __cordl_internal_set_KSpointer)) int32_t KSpointer;

  /// @brief Field KSs, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_KSs, put = __cordl_internal_set_KSs))::System::Collections::ArrayList* KSs;

  /// @brief Field cs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cs, put = __cordl_internal_set_cs))::System::Xml::Schema::ConstraintStruct* cs;

  __declspec(property(get = get_lastDepth)) int32_t lastDepth;

  /// @brief Method EndElement, addr 0x2ef69c4, size 0x48, virtual true, abstract: false, final false
  inline bool EndElement(::StringW localname, ::StringW URN);

  static inline ::System::Xml::Schema::SelectorActiveAxis* New_ctor(::System::Xml::Schema::Asttree* axisTree, ::System::Xml::Schema::ConstraintStruct* cs);

  /// @brief Method PopKS, addr 0x2ef6ddc, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::KeySequence* PopKS();

  /// @brief Method PushKS, addr 0x2ef6a0c, size 0x2d8, virtual false, abstract: false, final false
  inline int32_t PushKS(int32_t errline, int32_t errcol);

  constexpr int32_t const& __cordl_internal_get_KSpointer() const;

  constexpr int32_t& __cordl_internal_get_KSpointer();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_KSs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_KSs() const;

  constexpr ::System::Xml::Schema::ConstraintStruct*& __cordl_internal_get_cs();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::ConstraintStruct*> const& __cordl_internal_get_cs() const;

  constexpr void __cordl_internal_set_KSpointer(int32_t value);

  constexpr void __cordl_internal_set_KSs(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_cs(::System::Xml::Schema::ConstraintStruct* value);

  /// @brief Method .ctor, addr 0x2ef6850, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::Asttree* axisTree, ::System::Xml::Schema::ConstraintStruct* cs);

  /// @brief Method get_lastDepth, addr 0x2ef691c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_lastDepth();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectorActiveAxis();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SelectorActiveAxis", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectorActiveAxis(SelectorActiveAxis&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectorActiveAxis", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectorActiveAxis(SelectorActiveAxis const&) = delete;

  /// @brief Field cs, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::ConstraintStruct* ___cs;

  /// @brief Field KSs, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___KSs;

  /// @brief Field KSpointer, offset: 0x38, size: 0x4, def value: None
  int32_t ___KSpointer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SelectorActiveAxis, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::SelectorActiveAxis, ___cs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SelectorActiveAxis, ___KSs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SelectorActiveAxis, ___KSpointer) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SelectorActiveAxis);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SelectorActiveAxis*, "System.Xml.Schema", "SelectorActiveAxis");
