#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomObjectPicker_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RandomObjectPicker_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RandomObjectPicker_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: RandomObjectPicker`1<T>
class CORDL_TYPE RandomObjectPicker_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _lastPickTime, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__lastPickTime, put = __cordl_internal_set__lastPickTime)) float_t _lastPickTime;

  /// @brief Field _minimumPickInterval, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__minimumPickInterval, put = __cordl_internal_set__minimumPickInterval)) float_t _minimumPickInterval;

  /// @brief Field _objects, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__objects, put = __cordl_internal_set__objects)) ::ArrayW<T, ::Array<T>*> _objects;

  static inline ::GlobalNamespace::RandomObjectPicker_1<T>* New_ctor(T obj, float_t minimumPickInterval);

  static inline ::GlobalNamespace::RandomObjectPicker_1<T>* New_ctor(::ArrayW<T, ::Array<T>*> objects, float_t minimumPickInterval);

  /// @brief Method PickRandomObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T PickRandomObject();

  constexpr float_t const& __cordl_internal_get__lastPickTime() const;

  constexpr float_t& __cordl_internal_get__lastPickTime();

  constexpr float_t const& __cordl_internal_get__minimumPickInterval() const;

  constexpr float_t& __cordl_internal_get__minimumPickInterval();

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__objects() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__objects();

  constexpr void __cordl_internal_set__lastPickTime(float_t value);

  constexpr void __cordl_internal_set__minimumPickInterval(float_t value);

  constexpr void __cordl_internal_set__objects(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T obj, float_t minimumPickInterval);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> objects, float_t minimumPickInterval);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomObjectPicker_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RandomObjectPicker_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomObjectPicker_1(RandomObjectPicker_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomObjectPicker_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomObjectPicker_1(RandomObjectPicker_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16436 };

  /// @brief Field _objects, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____objects;

  /// @brief Field _lastPickTime, offset: 0x18, size: 0x4, def value: None
  float_t ____lastPickTime;

  /// @brief Field _minimumPickInterval, offset: 0x1c, size: 0x4, def value: None
  float_t ____minimumPickInterval;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::RandomObjectPicker_1, "", "RandomObjectPicker`1");
