#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodesHelper_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.GetAllNodesFromRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* (*)(::GlobalNamespace::MissionNode*)>(
    &::GlobalNamespace::MissionNodesHelper::GetAllNodesFromRoot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x22a1144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "GetAllNodesFromRoot", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.VisitAllTree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::MissionNode*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>*)>(&::GlobalNamespace::MissionNodesHelper::VisitAllTree)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22a11c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "VisitAllTree", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.CycleDetection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionNode*)>(&::GlobalNamespace::MissionNodesHelper::CycleDetection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x22a129c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "CycleDetection", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.CycleDetection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(
    ::GlobalNamespace::MissionNode*, int32_t, ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MissionNode*, int32_t>*)>(&::GlobalNamespace::MissionNodesHelper::CycleDetection)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x22a1318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "CycleDetection", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MissionNode*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.FinalNodeIsFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionNode*)>(
    &::GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22a146c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "FinalNodeIsFinal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper.FinalNodeIsFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::MissionNode*, ::GlobalNamespace::MissionNode*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>*)>(
        &::GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x22a14f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "FinalNodeIsFinal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionNodesHelper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionNodesHelper::*)()>(&::GlobalNamespace::MissionNodesHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a1610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* GlobalNamespace::MissionNodesHelper::GetAllNodesFromRoot(::GlobalNamespace::MissionNode* root) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "GetAllNodesFromRoot", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>*, false>(nullptr, ___internal_method, root);
}
inline void GlobalNamespace::MissionNodesHelper::VisitAllTree(::GlobalNamespace::MissionNode* node, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* visitedNodes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "VisitAllTree", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, node, visitedNodes);
}
inline bool GlobalNamespace::MissionNodesHelper::CycleDetection(::GlobalNamespace::MissionNode* node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "CycleDetection", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
inline bool GlobalNamespace::MissionNodesHelper::CycleDetection(::GlobalNamespace::MissionNode* node, int32_t layer,
                                                                ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MissionNode*, int32_t>* layers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "CycleDetection", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::MissionNode*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node, layer, layers);
}
inline bool GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal(::GlobalNamespace::MissionNode* finalNode, ::GlobalNamespace::MissionNode* rootNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "FinalNodeIsFinal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, finalNode, rootNode);
}
inline bool GlobalNamespace::MissionNodesHelper::FinalNodeIsFinal(::GlobalNamespace::MissionNode* finalNode, ::GlobalNamespace::MissionNode* node,
                                                                  ::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>* visitedNodes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), "FinalNodeIsFinal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::MissionNode*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, finalNode, node, visitedNodes);
}
inline ::GlobalNamespace::MissionNodesHelper* GlobalNamespace::MissionNodesHelper::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionNodesHelper*>());
}
inline void GlobalNamespace::MissionNodesHelper::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodesHelper*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionNodesHelper::MissionNodesHelper() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
