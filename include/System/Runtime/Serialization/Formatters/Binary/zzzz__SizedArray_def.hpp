#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/SizedArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SizedArray)
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class SizedArray;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::SizedArray);
// Type: System.Runtime.Serialization.Formatters.Binary::SizedArray
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::SizedArray*
class CORDL_TYPE SizedArray : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item)) ::System::Object* Item[];

  /// @brief Field negObjects, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_negObjects, put = __cordl_internal_set_negObjects)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> negObjects;

  /// @brief Field objects, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_objects, put = __cordl_internal_set_objects)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> objects;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Clone, addr 0x3c9d550, size 0x58, virtual true, abstract: false, final true
  inline ::System::Object* Clone();

  /// @brief Method IncreaseCapacity, addr 0x3c9d5a8, size 0x218, virtual false, abstract: false, final false
  inline void IncreaseCapacity(int32_t index);

  static inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* New_ctor();

  static inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* New_ctor(int32_t length);

  static inline ::System::Runtime::Serialization::Formatters::Binary::SizedArray* New_ctor(::System::Runtime::Serialization::Formatters::Binary::SizedArray* sizedArray);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_negObjects() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_negObjects();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_objects() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_objects();

  constexpr void __cordl_internal_set_negObjects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_objects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x3c99bf8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3c99cc8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(int32_t length);

  /// @brief Method .ctor, addr 0x3c9d49c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::Formatters::Binary::SizedArray* sizedArray);

  /// @brief Method get_Item, addr 0x3c9c348, size 0x74, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_Item, addr 0x3c9c248, size 0x100, virtual false, abstract: false, final false
  inline void set_Item(int32_t index, ::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SizedArray();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SizedArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SizedArray(SizedArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SizedArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SizedArray(SizedArray const&) = delete;

  /// @brief Field objects, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___objects;

  /// @brief Field negObjects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___negObjects;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3293 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::SizedArray, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SizedArray, ___objects) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::SizedArray, ___negObjects) == 0x18, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::SizedArray);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::SizedArray*, "System.Runtime.Serialization.Formatters.Binary", "SizedArray");
