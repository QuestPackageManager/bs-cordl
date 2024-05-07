#pragma once
// IWYU pragma private; include "System/Xml/ReadContentAsBinaryHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__ReadContentAsBinaryHelper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadContentAsBinaryHelper)
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
struct __ReadContentAsBinaryHelper__State;
}
// Forward declare root types
namespace System::Xml {
struct __ReadContentAsBinaryHelper__State;
}
namespace System::Xml {
class ReadContentAsBinaryHelper;
}
// Write type traits
MARK_VAL_T(::System::Xml::__ReadContentAsBinaryHelper__State);
MARK_REF_PTR_T(::System::Xml::ReadContentAsBinaryHelper);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::ReadContentAsBinaryHelper::State
struct CORDL_TYPE __ReadContentAsBinaryHelper__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ReadContentAsBinaryHelper__State_Unwrapped
  enum struct ____ReadContentAsBinaryHelper__State_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_InReadContent = static_cast<int32_t>(0x1),
    __E_InReadElementContent = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ReadContentAsBinaryHelper__State_Unwrapped() const noexcept {
    return static_cast<____ReadContentAsBinaryHelper__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReadContentAsBinaryHelper__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ReadContentAsBinaryHelper__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InReadContent value: static_cast<int32_t>(0x1)
  static ::System::Xml::__ReadContentAsBinaryHelper__State const InReadContent;

  /// @brief Field InReadElementContent value: static_cast<int32_t>(0x2)
  static ::System::Xml::__ReadContentAsBinaryHelper__State const InReadElementContent;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::System::Xml::__ReadContentAsBinaryHelper__State const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__ReadContentAsBinaryHelper__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__ReadContentAsBinaryHelper__State, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: System.Xml::ReadContentAsBinaryHelper
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::ReadContentAsBinaryHelper*
class CORDL_TYPE ReadContentAsBinaryHelper : public ::System::Object {
public:
  // Declarations
  using State = ::System::Xml::__ReadContentAsBinaryHelper__State;

  /// @brief Field isEnd, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isEnd, put = __cordl_internal_set_isEnd)) bool isEnd;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader))::System::Xml::XmlReader* reader;

  /// @brief Field state, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state))::System::Xml::__ReadContentAsBinaryHelper__State state;

  /// @brief Field valueOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_valueOffset, put = __cordl_internal_set_valueOffset)) int32_t valueOffset;

  /// @brief Method Finish, addr 0x2e63ff0, size 0x140, virtual false, abstract: false, final false
  inline void Finish();

  /// @brief Method MoveToNextContentNode, addr 0x2e64130, size 0xd8, virtual false, abstract: false, final false
  inline bool MoveToNextContentNode(bool moveIfOnContentNode);

  /// @brief Method Reset, addr 0x2e64208, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get_isEnd() const;

  constexpr bool& __cordl_internal_get_isEnd();

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& __cordl_internal_get_reader() const;

  constexpr ::System::Xml::__ReadContentAsBinaryHelper__State const& __cordl_internal_get_state() const;

  constexpr ::System::Xml::__ReadContentAsBinaryHelper__State& __cordl_internal_get_state();

  constexpr int32_t const& __cordl_internal_get_valueOffset() const;

  constexpr int32_t& __cordl_internal_get_valueOffset();

  constexpr void __cordl_internal_set_isEnd(bool value);

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_state(::System::Xml::__ReadContentAsBinaryHelper__State value);

  constexpr void __cordl_internal_set_valueOffset(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReadContentAsBinaryHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReadContentAsBinaryHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReadContentAsBinaryHelper(ReadContentAsBinaryHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReadContentAsBinaryHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReadContentAsBinaryHelper(ReadContentAsBinaryHelper const&) = delete;

  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___reader;

  /// @brief Field state, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::__ReadContentAsBinaryHelper__State ___state;

  /// @brief Field valueOffset, offset: 0x1c, size: 0x4, def value: None
  int32_t ___valueOffset;

  /// @brief Field isEnd, offset: 0x20, size: 0x1, def value: None
  bool ___isEnd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::ReadContentAsBinaryHelper, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___reader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___valueOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ReadContentAsBinaryHelper, ___isEnd) == 0x20, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__ReadContentAsBinaryHelper__State, "System.Xml", "ReadContentAsBinaryHelper/State");
NEED_NO_BOX(::System::Xml::ReadContentAsBinaryHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ReadContentAsBinaryHelper*, "System.Xml", "ReadContentAsBinaryHelper");
