#pragma once
// IWYU pragma private; include "System/Data/AutoIncrementBigInteger.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__AutoIncrementValue_def.hpp"
#include "System/Numerics/zzzz__BigInteger_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AutoIncrementBigInteger)
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
class AutoIncrementBigInteger;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::AutoIncrementBigInteger);
// Dependencies System.Data.AutoIncrementValue, System.Numerics.BigInteger
namespace System::Data {
// Is value type: false
// CS Name: System.Data.AutoIncrementBigInteger
class CORDL_TYPE AutoIncrementBigInteger : public ::System::Data::AutoIncrementValue {
public:
  // Declarations
  __declspec(property(get = get_Current, put = set_Current)) ::System::Object* Current;

  __declspec(property(get = get_DataType)) ::System::Type* DataType;

  __declspec(property(get = get_Seed, put = set_Seed)) int64_t Seed;

  __declspec(property(get = get_Step, put = set_Step)) int64_t Step;

  /// @brief Field _current, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) ::System::Numerics::BigInteger _current;

  /// @brief Field _seed, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__seed, put = __cordl_internal_set__seed)) int64_t _seed;

  /// @brief Field _step, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__step, put = __cordl_internal_set__step)) ::System::Numerics::BigInteger _step;

  /// @brief Method BoundaryCheck, addr 0x5e503a4, size 0x12c, virtual false, abstract: false, final false
  inline bool BoundaryCheck(::System::Numerics::BigInteger value);

  /// @brief Method MoveAfter, addr 0x5e506b0, size 0x80, virtual true, abstract: false, final false
  inline void MoveAfter();

  static inline ::System::Data::AutoIncrementBigInteger* New_ctor();

  /// @brief Method SetCurrent, addr 0x5e50730, size 0x24, virtual true, abstract: false, final false
  inline void SetCurrent(::System::Object* value, ::System::IFormatProvider* formatProvider);

  /// @brief Method SetCurrentAndIncrement, addr 0x5e50754, size 0xc0, virtual true, abstract: false, final false
  inline void SetCurrentAndIncrement(::System::Object* value);

  constexpr ::System::Numerics::BigInteger const& __cordl_internal_get__current() const;

  constexpr ::System::Numerics::BigInteger& __cordl_internal_get__current();

  constexpr int64_t const& __cordl_internal_get__seed() const;

  constexpr int64_t& __cordl_internal_get__seed();

  constexpr ::System::Numerics::BigInteger const& __cordl_internal_get__step() const;

  constexpr ::System::Numerics::BigInteger& __cordl_internal_get__step();

  constexpr void __cordl_internal_set__current(::System::Numerics::BigInteger value);

  constexpr void __cordl_internal_set__seed(int64_t value);

  constexpr void __cordl_internal_set__step(::System::Numerics::BigInteger value);

  /// @brief Method .ctor, addr 0x5e4b040, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Current, addr 0x5e50170, size 0x60, virtual true, abstract: false, final false
  inline ::System::Object* get_Current();

  /// @brief Method get_DataType, addr 0x5e50250, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_DataType();

  /// @brief Method get_Seed, addr 0x5e502b0, size 0x8, virtual true, abstract: false, final false
  inline int64_t get_Seed();

  /// @brief Method get_Step, addr 0x5e504d0, size 0x64, virtual true, abstract: false, final false
  inline int64_t get_Step();

  /// @brief Method set_Current, addr 0x5e501d0, size 0x80, virtual true, abstract: false, final false
  inline void set_Current(::System::Object* value);

  /// @brief Method set_Seed, addr 0x5e502b8, size 0xec, virtual true, abstract: false, final false
  inline void set_Seed(int64_t value);

  /// @brief Method set_Step, addr 0x5e50534, size 0x17c, virtual true, abstract: false, final false
  inline void set_Step(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AutoIncrementBigInteger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AutoIncrementBigInteger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AutoIncrementBigInteger(AutoIncrementBigInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AutoIncrementBigInteger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AutoIncrementBigInteger(AutoIncrementBigInteger const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13703 };

  /// @brief Field _current, offset: 0x18, size: 0x10, def value: None
  ::System::Numerics::BigInteger ____current;

  /// @brief Field _seed, offset: 0x28, size: 0x8, def value: None
  int64_t ____seed;

  /// @brief Field _step, offset: 0x30, size: 0x10, def value: None
  ::System::Numerics::BigInteger ____step;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::AutoIncrementBigInteger, ____current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::AutoIncrementBigInteger, ____seed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::AutoIncrementBigInteger, ____step) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Data::AutoIncrementBigInteger, 0x40>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::AutoIncrementBigInteger);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AutoIncrementBigInteger*, "System.Data", "AutoIncrementBigInteger");
