#pragma once
// IWYU pragma private; include "System/Collections/Generic/BitHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BitHelper)
// Forward declare root types
namespace System::Collections::Generic {
class BitHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Generic::BitHelper);
// Dependencies System.Object
namespace System::Collections::Generic {
// Is value type: false
// CS Name: System.Collections.Generic.BitHelper
class CORDL_TYPE BitHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _array, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array)) ::ArrayW<int32_t, ::Array<int32_t>*> _array;

  /// @brief Field _arrayPtr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arrayPtr, put = __cordl_internal_set__arrayPtr)) ::cordl_internals::Ptr<int32_t> _arrayPtr;

  /// @brief Field _length, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) int32_t _length;

  /// @brief Field _useStackAlloc, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__useStackAlloc, put = __cordl_internal_set__useStackAlloc)) bool _useStackAlloc;

  /// @brief Method IsMarked, addr 0x4486fc8, size 0x84, virtual false, abstract: false, final false
  inline bool IsMarked(int32_t bitPosition);

  /// @brief Method MarkBit, addr 0x4486f4c, size 0x7c, virtual false, abstract: false, final false
  inline void MarkBit(int32_t bitPosition);

  static inline ::System::Collections::Generic::BitHelper* New_ctor(::ArrayW<int32_t, ::Array<int32_t>*> bitArray, int32_t length);

  static inline ::System::Collections::Generic::BitHelper* New_ctor(::cordl_internals::Ptr<int32_t> bitArrayPtr, int32_t length);

  /// @brief Method ToIntArrayLength, addr 0x448704c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t ToIntArrayLength(int32_t n);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__array() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__array();

  constexpr ::cordl_internals::Ptr<int32_t> const& __cordl_internal_get__arrayPtr() const;

  constexpr ::cordl_internals::Ptr<int32_t>& __cordl_internal_get__arrayPtr();

  constexpr int32_t const& __cordl_internal_get__length() const;

  constexpr int32_t& __cordl_internal_get__length();

  constexpr bool const& __cordl_internal_get__useStackAlloc() const;

  constexpr bool& __cordl_internal_get__useStackAlloc();

  constexpr void __cordl_internal_set__array(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__arrayPtr(::cordl_internals::Ptr<int32_t> value);

  constexpr void __cordl_internal_set__length(int32_t value);

  constexpr void __cordl_internal_set__useStackAlloc(bool value);

  /// @brief Method .ctor, addr 0x4486f1c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<int32_t, ::Array<int32_t>*> bitArray, int32_t length);

  /// @brief Method .ctor, addr 0x4486ee4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<int32_t> bitArrayPtr, int32_t length);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BitHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BitHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BitHelper(BitHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BitHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BitHelper(BitHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9514 };

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
static_assert(offsetof(::System::Collections::Generic::BitHelper, ____length) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Generic::BitHelper, ____arrayPtr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Generic::BitHelper, ____array) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Generic::BitHelper, ____useStackAlloc) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Collections::Generic::BitHelper, 0x30>, "Size mismatch!");

} // namespace System::Collections::Generic
NEED_NO_BOX(::System::Collections::Generic::BitHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::BitHelper*, "System.Collections.Generic", "BitHelper");
