#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitHelper)
// Forward declare root types
namespace System::Collections::Generic {
class BitHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Generic::BitHelper);
// Type: System.Collections.Generic::BitHelper
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14311))
// CS Name: ::System.Collections.Generic::BitHelper*
class CORDL_TYPE BitHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _length, offset 0x10, size 0x4
  __declspec(property(get = __get__length, put = __set__length)) int32_t _length;

  /// @brief Field _arrayPtr, offset 0x18, size 0x8
  __declspec(property(get = __get__arrayPtr, put = __set__arrayPtr))::cordl_internals::Ptr<int32_t> _arrayPtr;

  /// @brief Field _array, offset 0x20, size 0x8
  __declspec(property(get = __get__array, put = __set__array))::ArrayW<int32_t, ::Array<int32_t>*> _array;

  /// @brief Field _useStackAlloc, offset 0x28, size 0x1
  __declspec(property(get = __get__useStackAlloc, put = __set__useStackAlloc)) bool _useStackAlloc;

  constexpr int32_t& __get__length();

  constexpr int32_t const& __get__length() const;

  constexpr void __set__length(int32_t value);

  constexpr ::cordl_internals::Ptr<int32_t>& __get__arrayPtr();

  constexpr ::cordl_internals::Ptr<int32_t> const& __get__arrayPtr() const;

  constexpr void __set__arrayPtr(::cordl_internals::Ptr<int32_t> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__array();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__array() const;

  constexpr void __set__array(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get__useStackAlloc();

  constexpr bool const& __get__useStackAlloc() const;

  constexpr void __set__useStackAlloc(bool value);

  static inline ::System::Collections::Generic::BitHelper* New_ctor(::cordl_internals::Ptr<int32_t> bitArrayPtr, int32_t length);

  /// @brief Method .ctor addr 0x2813e0c size 0x38 virtual false final false
  inline void _ctor(::cordl_internals::Ptr<int32_t> bitArrayPtr, int32_t length);

  static inline ::System::Collections::Generic::BitHelper* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> bitArray, int32_t length);

  /// @brief Method .ctor addr 0x2813e44 size 0x30 virtual false final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> bitArray, int32_t length);

  /// @brief Method MarkBit addr 0x2813e74 size 0x7c virtual false final false
  inline void MarkBit(int32_t bitPosition);

  /// @brief Method IsMarked addr 0x2813ef0 size 0x84 virtual false final false
  inline bool IsMarked(int32_t bitPosition);

  /// @brief Method ToIntArrayLength addr 0x2813f74 size 0x28 virtual false final false
  static inline int32_t ToIntArrayLength(int32_t n);

  // Ctor Parameters [CppParam { name: "", ty: "BitHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitHelper(BitHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitHelper(BitHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitHelper();

public:
  /// @brief Field _length, offset: 0x10, size: 0x4, def value: None
  int32_t ____length;

  /// @brief Field _arrayPtr, offset: 0x18, size: 0x8, def value: None
  ::cordl_internals::Ptr<int32_t> ____arrayPtr;

  /// @brief Field _array, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____array;

  /// @brief Field _useStackAlloc, offset: 0x28, size: 0x1, def value: None
  bool ____useStackAlloc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::BitHelper, 0x30>, "Size mismatch!");

} // namespace System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::BitHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::BitHelper*, "System.Collections.Generic", "BitHelper");
