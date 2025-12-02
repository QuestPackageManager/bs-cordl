#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashSetDebuggerTypeProxy_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NativeHashSetDebuggerTypeProxy_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey> struct HashMapHelper_1;
}
namespace Unity::Collections {
template <typename T> struct NativeHashSet_1;
}
// Forward declare root types
namespace Unity::Collections {
template <typename T> class NativeHashSetDebuggerTypeProxy_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Collections::NativeHashSetDebuggerTypeProxy_1);
// Dependencies System.Object
namespace Unity::Collections {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Collections.NativeHashSetDebuggerTypeProxy`1<T>
class CORDL_TYPE NativeHashSetDebuggerTypeProxy_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data)) ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>* Data;

  __declspec(property(get = get_Items)) ::System::Collections::Generic::List_1<T>* Items;

  static inline ::Unity::Collections::NativeHashSetDebuggerTypeProxy_1<T>* New_ctor(::Unity::Collections::NativeHashSet_1<T> data);

  constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>* const& __cordl_internal_get_Data() const;

  constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>*& __cordl_internal_get_Data();

  constexpr void __cordl_internal_set_Data(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeHashSet_1<T> data);

  /// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<T>* get_Items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeHashSetDebuggerTypeProxy_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeHashSetDebuggerTypeProxy_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeHashSetDebuggerTypeProxy_1(NativeHashSetDebuggerTypeProxy_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeHashSetDebuggerTypeProxy_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeHashSetDebuggerTypeProxy_1(NativeHashSetDebuggerTypeProxy_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15602 };

  /// @brief Field Data, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<T>* ___Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::NativeHashSetDebuggerTypeProxy_1, "Unity.Collections", "NativeHashSetDebuggerTypeProxy`1");
