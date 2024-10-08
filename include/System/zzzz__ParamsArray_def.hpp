#pragma once
// IWYU pragma private; include "System/ParamsArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParamsArray)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct ParamsArray;
}
// Write type traits
MARK_VAL_T(::System::ParamsArray);
// Type: System::ParamsArray
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::ParamsArray
struct CORDL_TYPE ParamsArray {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Field s_oneArgArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_oneArgArray, put = setStaticF_s_oneArgArray)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> s_oneArgArray;

  /// @brief Field s_threeArgArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_threeArgArray, put = setStaticF_s_threeArgArray)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> s_threeArgArray;

  /// @brief Field s_twoArgArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_twoArgArray, put = setStaticF_s_twoArgArray)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> s_twoArgArray;

  /// @brief Method GetAtSlow, addr 0x3d84c1c, size 0x54, virtual false, abstract: false, final false
  inline ::System::Object* GetAtSlow(int32_t index);

  /// @brief Method .ctor, addr 0x3d849c0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* arg0);

  /// @brief Method .ctor, addr 0x3d84a34, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method .ctor, addr 0x3d84aac, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method .ctor, addr 0x3d84b30, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_s_oneArgArray();

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_s_threeArgArray();

  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> getStaticF_s_twoArgArray();

  /// @brief Method get_Item, addr 0x3d84bac, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x3d84b90, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_Length();

  static inline void setStaticF_s_oneArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline void setStaticF_s_threeArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  static inline void setStaticF_s_twoArgArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParamsArray();

  // Ctor Parameters [CppParam { name: "_arg0", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_arg1", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam
  // { name: "_arg2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_args", ty: "::ArrayW<::System::Object*,::Array<::System::Object*>*>", modifiers: "", def_value: None
  // }]
  constexpr ParamsArray(::System::Object* _arg0, ::System::Object* _arg1, ::System::Object* _arg2, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _args) noexcept;

  /// @brief Field _arg0, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _arg0;

  /// @brief Field _arg1, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _arg1;

  /// @brief Field _arg2, offset: 0x10, size: 0x8, def value: None
  ::System::Object* _arg2;

  /// @brief Field _args, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> _args;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2457 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ParamsArray, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::ParamsArray, _arg0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ParamsArray, _arg1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::ParamsArray, _arg2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ParamsArray, _args) == 0x18, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ParamsArray, "System", "ParamsArray");
