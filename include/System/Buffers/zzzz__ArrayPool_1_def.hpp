#pragma once
// IWYU pragma private; include "System/Buffers/ArrayPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPool_1)
// Forward declare root types
namespace System::Buffers {
template <typename T> class ArrayPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Buffers::ArrayPool_1);
// Type: System.Buffers::ArrayPool`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Buffers {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Buffers::ArrayPool`1<T>*
class CORDL_TYPE ArrayPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Shared>k__BackingField, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__Shared_k__BackingField, put = setStaticF__Shared_k__BackingField)) ::System::Buffers::ArrayPool_1<T>* _Shared_k__BackingField;

  static inline ::System::Buffers::ArrayPool_1<T>* New_ctor();

  /// @brief Method Rent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<T, ::Array<T>*> Rent(int32_t minimumLength);

  /// @brief Method Return, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Return(::ArrayW<T, ::Array<T>*> array, bool clearArray);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Buffers::ArrayPool_1<T>* getStaticF__Shared_k__BackingField();

  /// @brief Method get_Shared, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Buffers::ArrayPool_1<T>* get_Shared();

  static inline void setStaticF__Shared_k__BackingField(::System::Buffers::ArrayPool_1<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayPool_1(ArrayPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayPool_1(ArrayPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3895 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::ArrayPool_1, "System.Buffers", "ArrayPool`1");
