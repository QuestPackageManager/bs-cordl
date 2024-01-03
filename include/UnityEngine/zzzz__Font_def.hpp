#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Font)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class __Font__FontTextureRebuildCallback;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class __Font__FontTextureRebuildCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Font);
MARK_REF_PTR_T(::UnityEngine::__Font__FontTextureRebuildCallback);
// Type: ::FontTextureRebuildCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15908))
// CS Name: ::Font::FontTextureRebuildCallback*
class CORDL_TYPE __Font__FontTextureRebuildCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::UnityEngine::__Font__FontTextureRebuildCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x2d4f804, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2d4f8c0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "__Font__FontTextureRebuildCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Font__FontTextureRebuildCallback(__Font__FontTextureRebuildCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Font__FontTextureRebuildCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Font__FontTextureRebuildCallback(__Font__FontTextureRebuildCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Font__FontTextureRebuildCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Font__FontTextureRebuildCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::Font
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15909))
// CS Name: ::UnityEngine::Font*
class CORDL_TYPE Font : public ::UnityEngine::Object {
public:
  // Declarations
  using FontTextureRebuildCallback = ::UnityEngine::__Font__FontTextureRebuildCallback;

  /// @brief Field m_FontTextureRebuildCallback, offset 0x18, size 0x8
  __declspec(property(get = __get_m_FontTextureRebuildCallback, put = __set_m_FontTextureRebuildCallback))::UnityEngine::__Font__FontTextureRebuildCallback* m_FontTextureRebuildCallback;

  /// @brief Field textureRebuilt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textureRebuilt, put = setStaticF_textureRebuilt))::System::Action_1<::UnityEngine::Font*>* textureRebuilt;

  __declspec(property(get = get_material))::UnityEngine::Material* material;

  __declspec(property(get = get_dynamic)) bool dynamic;

  __declspec(property(get = get_fontSize)) int32_t fontSize;

  constexpr ::UnityEngine::__Font__FontTextureRebuildCallback*& __get_m_FontTextureRebuildCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__Font__FontTextureRebuildCallback*> const& __get_m_FontTextureRebuildCallback() const;

  constexpr void __set_m_FontTextureRebuildCallback(::UnityEngine::__Font__FontTextureRebuildCallback* value);

  static inline void setStaticF_textureRebuilt(::System::Action_1<::UnityEngine::Font*>* value);

  static inline ::System::Action_1<::UnityEngine::Font*>* getStaticF_textureRebuilt();

  /// @brief Method add_textureRebuilt, addr 0x2d4f418, size 0xcc, virtual false, abstract: false, final false
  static inline void add_textureRebuilt(::System::Action_1<::UnityEngine::Font*>* value);

  /// @brief Method remove_textureRebuilt, addr 0x2d4f4e4, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_textureRebuilt(::System::Action_1<::UnityEngine::Font*>* value);

  /// @brief Method get_material, addr 0x2d4f5b0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Material* get_material();

  /// @brief Method get_dynamic, addr 0x2d4e578, size 0x3c, virtual false, abstract: false, final false
  inline bool get_dynamic();

  /// @brief Method get_fontSize, addr 0x2d4f5ec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_fontSize();

  static inline ::UnityEngine::Font* New_ctor();

  /// @brief Method .ctor, addr 0x2d4f628, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method InvokeTextureRebuilt_Internal, addr 0x2d4f6f0, size 0x8c, virtual false, abstract: false, final false
  static inline void InvokeTextureRebuilt_Internal(::UnityEngine::Font* font);

  /// @brief Method HasCharacter, addr 0x2d4f77c, size 0x44, virtual false, abstract: false, final false
  inline bool HasCharacter(char16_t c);

  /// @brief Method HasCharacter, addr 0x2d4f7c0, size 0x44, virtual false, abstract: false, final false
  inline bool HasCharacter(int32_t c);

  /// @brief Method Internal_CreateFont, addr 0x2d4f6ac, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_CreateFont(::UnityEngine::Font* self, ::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Font(Font&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Font", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Font(Font const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Font();

public:
  /// @brief Field m_FontTextureRebuildCallback, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::__Font__FontTextureRebuildCallback* ___m_FontTextureRebuildCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Font, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Font, ___m_FontTextureRebuildCallback) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Font);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Font*, "UnityEngine", "Font");
NEED_NO_BOX(::UnityEngine::__Font__FontTextureRebuildCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Font__FontTextureRebuildCallback*, "UnityEngine", "Font/FontTextureRebuildCallback");
