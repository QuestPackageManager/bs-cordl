#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/StrongBox_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__IStrongBox_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StrongBox_1)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename T> class StrongBox_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Runtime::CompilerServices::StrongBox_1);
// Dependencies System.Object, System.Runtime.CompilerServices.IStrongBox
namespace System::Runtime::CompilerServices {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Runtime.CompilerServices.StrongBox`1<T>
class CORDL_TYPE StrongBox_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Runtime_CompilerServices_IStrongBox_get_Value,
                      put = System_Runtime_CompilerServices_IStrongBox_set_Value)) ::System::Object* System_Runtime_CompilerServices_IStrongBox_Value;

  /// @brief Field Value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Value, put = __cordl_internal_set_Value)) T Value;

  /// @brief Convert operator to "::System::Runtime::CompilerServices::IStrongBox"
  constexpr operator ::System::Runtime::CompilerServices::IStrongBox*() noexcept;

  static inline ::System::Runtime::CompilerServices::StrongBox_1<T>* New_ctor();

  static inline ::System::Runtime::CompilerServices::StrongBox_1<T>* New_ctor(T value);

  /// @brief Method System.Runtime.CompilerServices.IStrongBox.get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Runtime_CompilerServices_IStrongBox_get_Value();

  /// @brief Method System.Runtime.CompilerServices.IStrongBox.set_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_CompilerServices_IStrongBox_set_Value(::System::Object* value);

  constexpr T const& __cordl_internal_get_Value() const;

  constexpr T& __cordl_internal_get_Value();

  constexpr void __cordl_internal_set_Value(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value);

  /// @brief Convert to "::System::Runtime::CompilerServices::IStrongBox"
  constexpr ::System::Runtime::CompilerServices::IStrongBox* i___System__Runtime__CompilerServices__IStrongBox() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StrongBox_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StrongBox_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StrongBox_1(StrongBox_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StrongBox_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StrongBox_1(StrongBox_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14141 };

  /// @brief Field Value, offset: 0x10, size: 0x8, def value: None
  T ___Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::StrongBox_1, "System.Runtime.CompilerServices", "StrongBox`1");
