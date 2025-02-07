#pragma once
// IWYU pragma private; include "System/Data/AutoIncrementValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoIncrementValue)
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class AutoIncrementValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::AutoIncrementValue);
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.AutoIncrementValue
class CORDL_TYPE AutoIncrementValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Auto, put = set_Auto)) bool Auto;

  __declspec(property(get = get_Current, put = set_Current)) ::System::Object* Current;

  __declspec(property(get = get_DataType)) ::System::Type* DataType;

  __declspec(property(get = get_Seed, put = set_Seed)) int64_t Seed;

  __declspec(property(get = get_Step, put = set_Step)) int64_t Step;

  /// @brief Field <Auto>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__Auto_k__BackingField, put = __cordl_internal_set__Auto_k__BackingField)) bool _Auto_k__BackingField;

  /// @brief Method Clone, addr 0x4140b78, size 0x110, virtual false, abstract: false, final false
  inline ::System::Data::AutoIncrementValue* Clone();

  /// @brief Method MoveAfter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MoveAfter();

  static inline ::System::Data::AutoIncrementValue* New_ctor();

  /// @brief Method SetCurrent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetCurrent(::System::Object* value, ::System::IFormatProvider* formatProvider);

  /// @brief Method SetCurrentAndIncrement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetCurrentAndIncrement(::System::Object* value);

  constexpr bool const& __cordl_internal_get__Auto_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Auto_k__BackingField();

  constexpr void __cordl_internal_set__Auto_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x4141a9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Auto, addr 0x4141a88, size 0x8, virtual false, abstract: false, final false
  inline bool get_Auto();

  /// @brief Method get_Current, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_DataType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* get_DataType();

  /// @brief Method get_Seed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_Seed();

  /// @brief Method get_Step, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int64_t get_Step();

  /// @brief Method set_Auto, addr 0x4141a90, size 0xc, virtual false, abstract: false, final false
  inline void set_Auto(bool value);

  /// @brief Method set_Current, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Current(::System::Object* value);

  /// @brief Method set_Seed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Seed(int64_t value);

  /// @brief Method set_Step, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Step(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoIncrementValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoIncrementValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoIncrementValue(AutoIncrementValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoIncrementValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoIncrementValue(AutoIncrementValue const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11338 };

  /// @brief Field <Auto>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Auto_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::AutoIncrementValue, ____Auto_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::AutoIncrementValue, 0x18>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::AutoIncrementValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AutoIncrementValue*, "System.Data", "AutoIncrementValue");
