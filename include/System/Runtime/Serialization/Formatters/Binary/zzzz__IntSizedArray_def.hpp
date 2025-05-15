#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/IntSizedArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntSizedArray)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class IntSizedArray;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray);
// Dependencies System.ICloneable, System.Object
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: System.Runtime.Serialization.Formatters.Binary.IntSizedArray
class CORDL_TYPE IntSizedArray : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  /// @brief Field negObjects, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_negObjects, put = __cordl_internal_set_negObjects)) ::ArrayW<int32_t, ::Array<int32_t>*> negObjects;

  /// @brief Field objects, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_objects, put = __cordl_internal_set_objects)) ::ArrayW<int32_t, ::Array<int32_t>*> objects;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x3d138d0, size 0x58, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method IncreaseCapacity, addr 0x3d13928, size 0x218, virtual false, abstract: false, final false
  inline void IncreaseCapacity(int32_t index);

  static inline ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* New_ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* New_ctor(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* sizedArray);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_negObjects() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_negObjects();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_objects() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_objects();

  constexpr void __cordl_internal_set_negObjects(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_objects(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x3d0c810, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d137f4, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray* sizedArray);

  /// @brief Method get_Item, addr 0x3d0c878, size 0x78, virtual false, abstract: false, final false
  inline int32_t get_Item(int32_t index);

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Item, addr 0x3d0c8f0, size 0xb8, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntSizedArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntSizedArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntSizedArray(IntSizedArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntSizedArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntSizedArray(IntSizedArray const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3294 };

  /// @brief Field objects, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___objects;

  /// @brief Field negObjects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___negObjects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray, ___objects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray, ___negObjects) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::IntSizedArray, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::IntSizedArray*, "System.Runtime.Serialization.Formatters.Binary", "IntSizedArray");
