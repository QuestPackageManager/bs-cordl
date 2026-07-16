#pragma once
// IWYU pragma private; include "System/ParamsArray.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
DEFINE_IL2CPP_CLASS(::System::ParamsArray, "System", "ParamsArray");
// Dependencies System.Object
namespace System {
// Is value type: true
// CS Name: System.ParamsArray
struct CORDL_TYPE ParamsArray {
public:
  // Declarations
  __declspec(property(get = get_Item)) ::System::Object* Item[];

  __declspec(property(get = get_Length)) int32_t Length;

  /// @brief Field s_oneArgArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_oneArgArray, put = setStaticF_s_oneArgArray)) ::ArrayW<::System::Object*> s_oneArgArray;

  /// @brief Field s_threeArgArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_threeArgArray, put = setStaticF_s_threeArgArray)) ::ArrayW<::System::Object*> s_threeArgArray;

  /// @brief Field s_twoArgArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_twoArgArray, put = setStaticF_s_twoArgArray)) ::ArrayW<::System::Object*> s_twoArgArray;

  /// @brief Method GetAtSlow, addr 0x5c55cec, size 0x54, virtual false, abstract: false, final false
  inline ::System::Object* GetAtSlow(int32_t index);

  /// @brief Method .ctor, addr 0x5c55a7c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* arg0);

  /// @brief Method .ctor, addr 0x5c55af4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* arg0, ::System::Object* arg1);

  /// @brief Method .ctor, addr 0x5c55b70, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* arg0, ::System::Object* arg1, ::System::Object* arg2);

  /// @brief Method .ctor, addr 0x5c55bf8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Object*> args);

  static inline ::ArrayW<::System::Object*> getStaticF_s_oneArgArray();

  static inline ::ArrayW<::System::Object*> getStaticF_s_threeArgArray();

  static inline ::ArrayW<::System::Object*> getStaticF_s_twoArgArray();

  /// @brief Method get_Item, addr 0x5c55c6c, size 0x80, virtual false, abstract: false, final false
  inline ::System::Object* get_Item(int32_t index);

  /// @brief Method get_Length, addr 0x5c55c54, size 0x18, virtual false, abstract: false, final false
  inline int32_t get_Length();

  static inline void setStaticF_s_oneArgArray(::ArrayW<::System::Object*> value);

  static inline void setStaticF_s_threeArgArray(::ArrayW<::System::Object*> value);

  static inline void setStaticF_s_twoArgArray(::ArrayW<::System::Object*> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParamsArray();

  // Ctor Parameters [CppParam { name: "_arg0", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_arg1", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam
  // { name: "_arg2", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_args", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: None }]
  constexpr ParamsArray(::System::Object* _arg0, ::System::Object* _arg1, ::System::Object* _arg2, ::ArrayW<::System::Object*> _args) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2462 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _arg0, offset: 0x0, size: 0x8, def value: None
  ::System::Object* _arg0;

  /// @brief Field _arg1, offset: 0x8, size: 0x8, def value: None
  ::System::Object* _arg1;

  /// @brief Field _arg2, offset: 0x10, size: 0x8, def value: None
  ::System::Object* _arg2;

  /// @brief Field _args, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*> _args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ParamsArray, _arg0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::ParamsArray, _arg1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::ParamsArray, _arg2) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ParamsArray, _args) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::ParamsArray) == 0x20, "Size mismatch!");

} // namespace System
