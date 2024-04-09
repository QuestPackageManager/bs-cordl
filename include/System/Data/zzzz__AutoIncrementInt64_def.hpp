#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__AutoIncrementValue_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoIncrementInt64)
namespace System::Numerics {
struct BigInteger;
}
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
class AutoIncrementInt64;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::AutoIncrementInt64);
// Type: System.Data::AutoIncrementInt64
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::AutoIncrementInt64*
class CORDL_TYPE AutoIncrementInt64 : public ::System::Data::AutoIncrementValue {
public:
  // Declarations
  __declspec(property(get = get_Current, put = set_Current))::System::Object* Current;

  __declspec(property(get = get_DataType))::System::Type* DataType;

  __declspec(property(get = get_Seed, put = set_Seed)) int64_t Seed;

  __declspec(property(get = get_Step, put = set_Step)) int64_t Step;

  /// @brief Field _current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) int64_t _current;

  /// @brief Field _seed, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__seed, put = __cordl_internal_set__seed)) int64_t _seed;

  /// @brief Field _step, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__step, put = __cordl_internal_set__step)) int64_t _step;

  /// @brief Method BoundaryCheck, addr 0x2b7eb8c, size 0xd0, virtual false, abstract: false, final false
  inline bool BoundaryCheck(::System::Numerics::BigInteger value);

  /// @brief Method MoveAfter, addr 0x2b7ed24, size 0x14, virtual true, abstract: false, final false
  inline void MoveAfter();

  static inline ::System::Data::AutoIncrementInt64* New_ctor();

  /// @brief Method SetCurrent, addr 0x2b7ed38, size 0x74, virtual true, abstract: false, final false
  inline void SetCurrent(::System::Object* value, ::System::IFormatProvider* formatProvider);

  /// @brief Method SetCurrentAndIncrement, addr 0x2b7edac, size 0x168, virtual true, abstract: false, final false
  inline void SetCurrentAndIncrement(::System::Object* value);

  constexpr int64_t const& __cordl_internal_get__current() const;

  constexpr int64_t& __cordl_internal_get__current();

  constexpr int64_t const& __cordl_internal_get__seed() const;

  constexpr int64_t& __cordl_internal_get__seed();

  constexpr int64_t const& __cordl_internal_get__step() const;

  constexpr int64_t& __cordl_internal_get__step();

  constexpr void __cordl_internal_set__current(int64_t value);

  constexpr void __cordl_internal_set__seed(int64_t value);

  constexpr void __cordl_internal_set__step(int64_t value);

  /// @brief Method .ctor, addr 0x2b798fc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Current, addr 0x2b7e9b4, size 0x5c, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_DataType, addr 0x2b7ea88, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_DataType();

  /// @brief Method get_Seed, addr 0x2b7eaf4, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Seed();

  /// @brief Method get_Step, addr 0x2b7ec5c, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Step();

  /// @brief Method set_Current, addr 0x2b7ea10, size 0x78, virtual true, abstract: false, final false
  inline void set_Current(::System::Object* value);

  /// @brief Method set_Seed, addr 0x2b7eafc, size 0x90, virtual true, abstract: false, final false
  inline void set_Seed(int64_t value);

  /// @brief Method set_Step, addr 0x2b7ec64, size 0x80, virtual true, abstract: false, final false
  inline void set_Step(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoIncrementInt64();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoIncrementInt64", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoIncrementInt64(AutoIncrementInt64&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoIncrementInt64", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoIncrementInt64(AutoIncrementInt64 const&) = delete;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  int64_t ____current;

  /// @brief Field _seed, offset: 0x20, size: 0x8, def value: None
  int64_t ____seed;

  /// @brief Field _step, offset: 0x28, size: 0x8, def value: None
  int64_t ____step;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::AutoIncrementInt64, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Data::AutoIncrementInt64, ____current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::AutoIncrementInt64, ____seed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::AutoIncrementInt64, ____step) == 0x28, "Offset mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::AutoIncrementInt64);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AutoIncrementInt64*, "System.Data", "AutoIncrementInt64");
