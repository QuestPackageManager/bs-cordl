#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RandomObjectPicker_1)
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class RandomObjectPicker_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::RandomObjectPicker_1);
// Type: ::RandomObjectPicker`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14377))
// CS Name: ::RandomObjectPicker`1<T>*
class CORDL_TYPE RandomObjectPicker_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _objects, offset 0x10, size 0x8
  __declspec(property(get = __get__objects, put = __set__objects))::ArrayW<T, ::Array<T>*> _objects;

  /// @brief Field _lastPickTime, offset 0x18, size 0x4
  __declspec(property(get = __get__lastPickTime, put = __set__lastPickTime)) float_t _lastPickTime;

  /// @brief Field _minimumPickInterval, offset 0x1c, size 0x4
  __declspec(property(get = __get__minimumPickInterval, put = __set__minimumPickInterval)) float_t _minimumPickInterval;

  constexpr ::ArrayW<T, ::Array<T>*>& __get__objects();

  constexpr ::ArrayW<T, ::Array<T>*> const& __get__objects() const;

  constexpr void __set__objects(::ArrayW<T, ::Array<T>*> value);

  constexpr float_t& __get__lastPickTime();

  constexpr float_t const& __get__lastPickTime() const;

  constexpr void __set__lastPickTime(float_t value);

  constexpr float_t& __get__minimumPickInterval();

  constexpr float_t const& __get__minimumPickInterval() const;

  constexpr void __set__minimumPickInterval(float_t value);

  static inline ::GlobalNamespace::RandomObjectPicker_1<T>* New_ctor(T obj, float_t minimumPickInterval);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T obj, float_t minimumPickInterval);

  static inline ::GlobalNamespace::RandomObjectPicker_1<T>* New_ctor(::ArrayW<T, ::Array<T>*> objects, float_t minimumPickInterval);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<T, ::Array<T>*> objects, float_t minimumPickInterval);

  /// @brief Method PickRandomObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T PickRandomObject();

  // Ctor Parameters [CppParam { name: "", ty: "RandomObjectPicker_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RandomObjectPicker_1(RandomObjectPicker_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RandomObjectPicker_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RandomObjectPicker_1(RandomObjectPicker_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RandomObjectPicker_1();

public:
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
