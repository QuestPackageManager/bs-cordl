#pragma once
// IWYU pragma private; include "GlobalNamespace/LongRollingAverage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LongRollingAverage)
// Forward declare root types
namespace GlobalNamespace {
class LongRollingAverage;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LongRollingAverage);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LongRollingAverage
class CORDL_TYPE LongRollingAverage : public ::System::Object {
public:
  // Declarations
  /// @brief Field _buffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer)) ::ArrayW<int64_t, ::Array<int64_t>*> _buffer;

  /// @brief Field _currentAverage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__currentAverage, put = __cordl_internal_set__currentAverage)) int64_t _currentAverage;

  /// @brief Field _currentTotal, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__currentTotal, put = __cordl_internal_set__currentTotal)) int64_t _currentTotal;

  /// @brief Field _index, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__index, put = __cordl_internal_set__index)) int32_t _index;

  /// @brief Field _length, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) int32_t _length;

  __declspec(property(get = get_currentAverage)) int64_t currentAverage;

  __declspec(property(get = get_hasValue)) bool hasValue;

  static inline ::GlobalNamespace::LongRollingAverage* New_ctor(int32_t window);

  /// @brief Method Reset, addr 0x22d3574, size 0xc, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x22d3480, size 0xf4, virtual false, abstract: false, final false
  inline void Update(int64_t value);

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*> const& __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<int64_t, ::Array<int64_t>*>& __cordl_internal_get__buffer();

  constexpr int64_t const& __cordl_internal_get__currentAverage() const;

  constexpr int64_t& __cordl_internal_get__currentAverage();

  constexpr int64_t const& __cordl_internal_get__currentTotal() const;

  constexpr int64_t& __cordl_internal_get__currentTotal();

  constexpr int32_t const& __cordl_internal_get__index() const;

  constexpr int32_t& __cordl_internal_get__index();

  constexpr int32_t const& __cordl_internal_get__length() const;

  constexpr int32_t& __cordl_internal_get__length();

  constexpr void __cordl_internal_set__buffer(::ArrayW<int64_t, ::Array<int64_t>*> value);

  constexpr void __cordl_internal_set__currentAverage(int64_t value);

  constexpr void __cordl_internal_set__currentTotal(int64_t value);

  constexpr void __cordl_internal_set__index(int32_t value);

  constexpr void __cordl_internal_set__length(int32_t value);

  /// @brief Method .ctor, addr 0x22d3418, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(int32_t window);

  /// @brief Method get_currentAverage, addr 0x22d3400, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_currentAverage();

  /// @brief Method get_hasValue, addr 0x22d3408, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasValue();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LongRollingAverage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LongRollingAverage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LongRollingAverage(LongRollingAverage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LongRollingAverage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LongRollingAverage(LongRollingAverage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14839 };

  /// @brief Field _currentTotal, offset: 0x10, size: 0x8, def value: None
  int64_t ____currentTotal;

  /// @brief Field _currentAverage, offset: 0x18, size: 0x8, def value: None
  int64_t ____currentAverage;

  /// @brief Field _buffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int64_t, ::Array<int64_t>*> ____buffer;

  /// @brief Field _index, offset: 0x28, size: 0x4, def value: None
  int32_t ____index;

  /// @brief Field _length, offset: 0x2c, size: 0x4, def value: None
  int32_t ____length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LongRollingAverage, ____currentTotal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongRollingAverage, ____currentAverage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongRollingAverage, ____buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongRollingAverage, ____index) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LongRollingAverage, ____length) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LongRollingAverage, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LongRollingAverage);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LongRollingAverage*, "", "LongRollingAverage");
