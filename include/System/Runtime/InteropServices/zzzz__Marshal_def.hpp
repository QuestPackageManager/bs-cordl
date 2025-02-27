#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/Marshal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Marshal)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Runtime::InteropServices {
class ICustomMarshaler;
}
namespace System::Runtime::InteropServices {
class Marshal_MarshalerInstanceKeyComparer;
}
namespace System::Runtime::InteropServices {
class Marshal_SecureStringAllocator;
}
namespace System::Runtime::InteropServices {
class Marshal___c;
}
namespace System::Security {
class SecureString;
}
namespace System {
class Array;
}
namespace System {
class Delegate;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class Marshal;
}
namespace System::Runtime::InteropServices {
class Marshal_MarshalerInstanceKeyComparer;
}
namespace System::Runtime::InteropServices {
class Marshal_SecureStringAllocator;
}
namespace System::Runtime::InteropServices {
class Marshal___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::Marshal);
MARK_REF_PTR_T(::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer);
MARK_REF_PTR_T(::System::Runtime::InteropServices::Marshal_SecureStringAllocator);
MARK_REF_PTR_T(::System::Runtime::InteropServices::Marshal___c);
// Dependencies System.MulticastDelegate
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.Marshal/SecureStringAllocator
class CORDL_TYPE Marshal_SecureStringAllocator : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3d25238, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(int32_t len);

  static inline ::System::Runtime::InteropServices::Marshal_SecureStringAllocator* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3d251ac, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marshal_SecureStringAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marshal_SecureStringAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marshal_SecureStringAllocator(Marshal_SecureStringAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marshal_SecureStringAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marshal_SecureStringAllocator(Marshal_SecureStringAllocator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3337 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::Marshal_SecureStringAllocator, 0x80>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
// Dependencies System.Collections.Generic.IEqualityComparer`1<T>, System.Object, System.ValueTuple`2<T1, T2>
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.Marshal/MarshalerInstanceKeyComparer
class CORDL_TYPE Marshal_MarshalerInstanceKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*, ::StringW>>*() noexcept;

  /// @brief Method Equals, addr 0x3d2524c, size 0x74, virtual true, abstract: false, final true
  inline bool Equals(::System::ValueTuple_2<::System::Type*, ::StringW> lhs, ::System::ValueTuple_2<::System::Type*, ::StringW> rhs);

  /// @brief Method GetHashCode, addr 0x3d252c0, size 0x54, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::ValueTuple_2<::System::Type*, ::StringW> key);

  static inline ::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer* New_ctor();

  /// @brief Method .ctor, addr 0x3d25314, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*,::StringW>>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::System::ValueTuple_2<::System::Type*, ::StringW>>*
  i___System__Collections__Generic__IEqualityComparer_1___System__ValueTuple_2___System__Type____StringW__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marshal_MarshalerInstanceKeyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marshal_MarshalerInstanceKeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marshal_MarshalerInstanceKeyComparer(Marshal_MarshalerInstanceKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marshal_MarshalerInstanceKeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marshal_MarshalerInstanceKeyComparer(Marshal_MarshalerInstanceKeyComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3338 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
// Dependencies System.Object
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.Marshal/<>c
class CORDL_TYPE Marshal___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Runtime::InteropServices::Marshal___c* __9;

  /// @brief Field <>9__201_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__201_0, put = setStaticF___9__201_0)) ::System::Func_1<
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*>* __9__201_0;

  static inline ::System::Runtime::InteropServices::Marshal___c* New_ctor();

  /// @brief Method <GetCustomMarshalerInstance>b__201_0, addr 0x3d25380, size 0x9c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*
  _GetCustomMarshalerInstance_b__201_0();

  /// @brief Method .ctor, addr 0x3d25378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::InteropServices::Marshal___c* getStaticF___9();

  static inline ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*>*
  getStaticF___9__201_0();

  static inline void setStaticF___9(::System::Runtime::InteropServices::Marshal___c* value);

  static inline void setStaticF___9__201_0(
      ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marshal___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marshal___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marshal___c(Marshal___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marshal___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marshal___c(Marshal___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3339 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::Marshal___c, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
// Dependencies System.Object
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.Marshal
class CORDL_TYPE Marshal : public ::System::Object {
public:
  // Declarations
  using MarshalerInstanceKeyComparer = ::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer;

  using SecureStringAllocator = ::System::Runtime::InteropServices::Marshal_SecureStringAllocator;

  using __c = ::System::Runtime::InteropServices::Marshal___c;

  /// @brief Field MarshalerInstanceCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MarshalerInstanceCache,
                      put = setStaticF_MarshalerInstanceCache)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>,
                                                                                                             ::System::Runtime::InteropServices::ICustomMarshaler*>* MarshalerInstanceCache;

  /// @brief Field MarshalerInstanceCacheLock, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_MarshalerInstanceCacheLock, put = setStaticF_MarshalerInstanceCacheLock)) ::System::Object* MarshalerInstanceCacheLock;

  /// @brief Field SystemDefaultCharSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SystemDefaultCharSize, put = setStaticF_SystemDefaultCharSize)) int32_t SystemDefaultCharSize;

  /// @brief Field SystemMaxDBCSCharSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_SystemMaxDBCSCharSize, put = setStaticF_SystemMaxDBCSCharSize)) int32_t SystemMaxDBCSCharSize;

  /// @brief Method AllocCoTaskMem, addr 0x3d235a8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr AllocCoTaskMem(int32_t cb);

  /// @brief Method AllocHGlobal, addr 0x3d235ac, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr AllocHGlobal(::System::IntPtr cb);

  /// @brief Method AllocHGlobal, addr 0x3d235b0, size 0x68, virtual false, abstract: false, final false
  static inline ::System::IntPtr AllocHGlobal(int32_t cb);

  /// @brief Method BufferToBSTR, addr 0x3d2422c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr BufferToBSTR(::cordl_internals::Ptr<char16_t> ptr, int32_t slen);

  /// @brief Method ClearAnsi, addr 0x3d23d0c, size 0x9c, virtual false, abstract: false, final false
  static inline void ClearAnsi(::System::IntPtr ptr);

  /// @brief Method ClearBSTR, addr 0x3d23b98, size 0xac, virtual false, abstract: false, final false
  static inline void ClearBSTR(::System::IntPtr ptr);

  /// @brief Method ClearUnicode, addr 0x3d23dc4, size 0x90, virtual false, abstract: false, final false
  static inline void ClearUnicode(::System::IntPtr ptr);

  /// @brief Method Copy, addr 0x3d23738, size 0xf4, virtual false, abstract: false, final false
  static inline void Copy(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t startIndex, ::System::IntPtr destination, int32_t length);

  /// @brief Method Copy, addr 0x3d239a4, size 0xf4, virtual false, abstract: false, final false
  static inline void Copy(::System::IntPtr source, ::ArrayW<char16_t, ::Array<char16_t>*> destination, int32_t startIndex, int32_t length);

  /// @brief Method Copy, addr 0x3d23a98, size 0xf4, virtual false, abstract: false, final false
  static inline void Copy(::System::IntPtr source, ::ArrayW<float_t, ::Array<float_t>*> destination, int32_t startIndex, int32_t length);

  /// @brief Method Copy, addr 0x3d238b0, size 0xf4, virtual false, abstract: false, final false
  static inline void Copy(::System::IntPtr source, ::ArrayW<uint8_t, ::Array<uint8_t>*> destination, int32_t startIndex, int32_t length);

  /// @brief Method FreeBSTR, addr 0x3d23b8c, size 0x4, virtual false, abstract: false, final false
  static inline void FreeBSTR(::System::IntPtr ptr);

  /// @brief Method FreeCoTaskMem, addr 0x3d23b90, size 0x4, virtual false, abstract: false, final false
  static inline void FreeCoTaskMem(::System::IntPtr ptr);

  /// @brief Method FreeHGlobal, addr 0x3d23b94, size 0x4, virtual false, abstract: false, final false
  static inline void FreeHGlobal(::System::IntPtr hglobal);

  /// @brief Method GetCustomMarshalerInstance, addr 0x3d248d8, size 0x834, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::ICustomMarshaler* GetCustomMarshalerInstance(::System::Type* type, ::StringW cookie);

  /// @brief Method GetDelegateForFunctionPointer, addr 0x3d245fc, size 0x238, virtual false, abstract: false, final false
  static inline ::System::Delegate* GetDelegateForFunctionPointer(::System::IntPtr ptr, ::System::Type* t);

  /// @brief Method GetDelegateForFunctionPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate> static inline TDelegate GetDelegateForFunctionPointer(::System::IntPtr ptr);

  /// @brief Method GetDelegateForFunctionPointerInternal, addr 0x3d245f8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Delegate* GetDelegateForFunctionPointerInternal(::System::IntPtr ptr, ::System::Type* t);

  /// @brief Method GetFunctionPointerForDelegate, addr 0x3d24838, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointerForDelegate(::System::Delegate* d);

  /// @brief Method GetFunctionPointerForDelegate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDelegate> static inline ::System::IntPtr GetFunctionPointerForDelegate(TDelegate d);

  /// @brief Method GetFunctionPointerForDelegateInternal, addr 0x3d24834, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetFunctionPointerForDelegateInternal(::System::Delegate* d);

  /// @brief Method GetHRForException, addr 0x3d23f98, size 0xc, virtual false, abstract: false, final false
  static inline int32_t GetHRForException(::System::Exception* e);

  /// @brief Method GetLastWin32Error, addr 0x3d23fac, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetLastWin32Error();

  /// @brief Method IsComObject, addr 0x3d23fa4, size 0x8, virtual false, abstract: false, final false
  static inline bool IsComObject(::System::Object* o);

  /// @brief Method OffsetOf, addr 0x3d23fb0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr OffsetOf(::System::Type* t, ::StringW fieldName);

  /// @brief Method PtrToStringAnsi, addr 0x3d23fb4, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW PtrToStringAnsi(::System::IntPtr ptr);

  /// @brief Method PtrToStringAnsi, addr 0x3d23fb8, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW PtrToStringAnsi(::System::IntPtr ptr, int32_t len);

  /// @brief Method PtrToStringUni, addr 0x3d23fbc, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW PtrToStringUni(::System::IntPtr ptr);

  /// @brief Method PtrToStringUni, addr 0x3d23fc0, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW PtrToStringUni(::System::IntPtr ptr, int32_t len);

  /// @brief Method PtrToStructure, addr 0x3d23fc8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* PtrToStructure(::System::IntPtr ptr, ::System::Type* structureType);

  /// @brief Method PtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T PtrToStructure(::System::IntPtr ptr);

  /// @brief Method PtrToStructure, addr 0x3d23fc4, size 0x4, virtual false, abstract: false, final false
  static inline void PtrToStructure(::System::IntPtr ptr, ::System::Object* structure);

  /// @brief Method PtrToStructure, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void PtrToStructure(::System::IntPtr ptr, T structure);

  /// @brief Method ReadByte, addr 0x3d23da8, size 0x1c, virtual false, abstract: false, final false
  static inline uint8_t ReadByte(::System::IntPtr ptr, int32_t ofs);

  /// @brief Method ReadInt16, addr 0x3d23e9c, size 0x44, virtual false, abstract: false, final false
  static inline int16_t ReadInt16(::System::IntPtr ptr, int32_t ofs);

  /// @brief Method ReadInt32, addr 0x3d23fcc, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ReadInt32(::System::IntPtr ptr);

  /// @brief Method ReadInt32, addr 0x3d23c44, size 0x48, virtual false, abstract: false, final false
  static inline int32_t ReadInt32(::System::IntPtr ptr, int32_t ofs);

  /// @brief Method SecureStringGlobalAllocator, addr 0x3d24230, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr SecureStringGlobalAllocator(int32_t len);

  /// @brief Method SecureStringToBSTR, addr 0x3d240f4, size 0x138, virtual false, abstract: false, final false
  static inline ::System::IntPtr SecureStringToBSTR(::System::Security::SecureString* s);

  /// @brief Method SecureStringToGlobalAllocUnicode, addr 0x3d24504, size 0xe8, virtual false, abstract: false, final false
  static inline ::System::IntPtr SecureStringToGlobalAllocUnicode(::System::Security::SecureString* s);

  /// @brief Method SecureStringToUnicode, addr 0x3d24284, size 0x280, virtual false, abstract: false, final false
  static inline ::System::IntPtr SecureStringToUnicode(::System::Security::SecureString* s, ::System::Runtime::InteropServices::Marshal_SecureStringAllocator* allocator);

  /// @brief Method SizeOf, addr 0x3d24008, size 0x70, virtual false, abstract: false, final false
  static inline int32_t SizeOf(::System::Object* structure);

  /// @brief Method SizeOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t SizeOf(T structure);

  /// @brief Method SizeOf, addr 0x3d24078, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SizeOf(::System::Type* t);

  /// @brief Method StringToHGlobalAnsi, addr 0x3d24080, size 0x74, virtual false, abstract: false, final false
  static inline ::System::IntPtr StringToHGlobalAnsi(::StringW s);

  /// @brief Method StringToHGlobalAnsi, addr 0x3d2407c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr StringToHGlobalAnsi(::cordl_internals::Ptr<char16_t> s, int32_t length);

  /// @brief Method StructureToPtr, addr 0x3d245ec, size 0x8, virtual false, abstract: false, final false
  static inline void StructureToPtr(::System::Object* structure, ::System::IntPtr ptr, bool fDeleteOld);

  /// @brief Method StructureToPtr, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void StructureToPtr(T structure, ::System::IntPtr ptr, bool fDeleteOld);

  /// @brief Method UnsafeAddrOfPinnedArrayElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::IntPtr UnsafeAddrOfPinnedArrayElement(::ArrayW<T, ::Array<T>*> arr, int32_t index);

  /// @brief Method UnsafeAddrOfPinnedArrayElement, addr 0x3d245f4, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr UnsafeAddrOfPinnedArrayElement(::System::Array* arr, int32_t index);

  /// @brief Method WriteByte, addr 0x3d23c8c, size 0x24, virtual false, abstract: false, final false
  static inline void WriteByte(::System::IntPtr ptr, int32_t ofs, uint8_t val);

  /// @brief Method WriteInt16, addr 0x3d23e54, size 0x48, virtual false, abstract: false, final false
  static inline void WriteInt16(::System::IntPtr ptr, int32_t ofs, int16_t val);

  /// @brief Method ZeroFreeBSTR, addr 0x3d23cb0, size 0x5c, virtual false, abstract: false, final false
  static inline void ZeroFreeBSTR(::System::IntPtr s);

  /// @brief Method ZeroFreeGlobalAllocAnsi, addr 0x3d23ee0, size 0x5c, virtual false, abstract: false, final false
  static inline void ZeroFreeGlobalAllocAnsi(::System::IntPtr s);

  /// @brief Method ZeroFreeGlobalAllocUnicode, addr 0x3d23f3c, size 0x5c, virtual false, abstract: false, final false
  static inline void ZeroFreeGlobalAllocUnicode(::System::IntPtr s);

  /// @brief Method copy_from_unmanaged, addr 0x3d2382c, size 0x80, virtual false, abstract: false, final false
  static inline void copy_from_unmanaged(::System::IntPtr source, int32_t startIndex, ::System::Array* destination, int32_t length);

  /// @brief Method copy_from_unmanaged_fixed, addr 0x3d238ac, size 0x4, virtual false, abstract: false, final false
  static inline void copy_from_unmanaged_fixed(::System::IntPtr source, int32_t startIndex, ::System::Array* destination, int32_t length, ::cordl_internals::Ptr<void> fixed_destination_element);

  /// @brief Method copy_to_unmanaged, addr 0x3d23650, size 0xe8, virtual false, abstract: false, final false
  static inline void copy_to_unmanaged(::ArrayW<uint8_t, ::Array<uint8_t>*> source, int32_t startIndex, ::System::IntPtr destination, int32_t length);

  /// @brief Method copy_to_unmanaged_fixed, addr 0x3d23618, size 0x4, virtual false, abstract: false, final false
  static inline void copy_to_unmanaged_fixed(::System::Array* source, int32_t startIndex, ::System::IntPtr destination, int32_t length, ::cordl_internals::Ptr<void> fixed_source_element);

  static inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>*
  getStaticF_MarshalerInstanceCache();

  static inline ::System::Object* getStaticF_MarshalerInstanceCacheLock();

  static inline int32_t getStaticF_SystemDefaultCharSize();

  static inline int32_t getStaticF_SystemMaxDBCSCharSize();

  static inline void
  setStaticF_MarshalerInstanceCache(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::Type*, ::StringW>, ::System::Runtime::InteropServices::ICustomMarshaler*>* value);

  static inline void setStaticF_MarshalerInstanceCacheLock(::System::Object* value);

  static inline void setStaticF_SystemDefaultCharSize(int32_t value);

  static inline void setStaticF_SystemMaxDBCSCharSize(int32_t value);

  /// @brief Method skip_fixed, addr 0x3d2361c, size 0x34, virtual false, abstract: false, final false
  static inline bool skip_fixed(::System::Array* array, int32_t startIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Marshal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Marshal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Marshal(Marshal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Marshal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Marshal(Marshal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3340 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::Marshal, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::Marshal);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::Marshal*, "System.Runtime.InteropServices", "Marshal");
NEED_NO_BOX(::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::Marshal_MarshalerInstanceKeyComparer*, "System.Runtime.InteropServices", "Marshal/MarshalerInstanceKeyComparer");
NEED_NO_BOX(::System::Runtime::InteropServices::Marshal_SecureStringAllocator);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::Marshal_SecureStringAllocator*, "System.Runtime.InteropServices", "Marshal/SecureStringAllocator");
NEED_NO_BOX(::System::Runtime::InteropServices::Marshal___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::Marshal___c*, "System.Runtime.InteropServices", "Marshal/<>c");
